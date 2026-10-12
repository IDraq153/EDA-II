#include <iostream>
using namespace std;

#include "heapListas.h"
#include "minHeap.h"

// Ejercicio 1
void ejercicio1(int *A, int n, int k) {
    if (k < 1 || k > n) return;

    minHeap heapcito(n);
    for (int i = 0; i < n; i++) {
        heapcito.insertar(A[i]);
    }

    for (int i = 0; i < k; i++) {
        cout << heapcito.extraerMin() << " ";
    } cout << endl;
}
// Ejercicio 2
void ejercicio2(int **listas, int k, int n) {
    if (k < 1 || n < 1) return;

    heapListas heapcito(k);
    for (int i = 0; i < k; i++) {
        Elemento e;
        e.setValor(listas[i][0]);
        e.setLista(i);
        e.setPosicion(0);
        heapcito.insertar(e);
    }

    while (heapcito.getCantidad() > 0) {
        Elemento e = heapcito.extraerMin();
        cout << e.getValor() << " ";

        int siguiente = e.getPosicion() + 1;
        if (siguiente < n) {
            Elemento nuevo;
            nuevo.setLista(e.getLista());
            nuevo.setPosicion(siguiente);
            nuevo.setValor(listas[e.getLista()][siguiente]);
            heapcito.insertar(nuevo);
        }
    } cout << endl;
}
// Ejercicio 3
int ejercicio3(int *A, int n, int k) {
    if (k < 1 || k > n)
        return -1;

    minHeap heapcito(k);
    for (int i = 0; i < k; i++) {
        heapcito.insertar(A[i]);
    }

    for (int i = k; i < n; i++) {
        if (A[i] > heapcito.getMin()) {
            heapcito.extraerMin();
            heapcito.insertar(A[i]);
        }
    }
    return heapcito.getMin();
}
// Ejercicio 4
void maxHeapify(int *A, int n, int i) {
    int mayor = i;
    int izq = 2 * i + 1;
    int der = 2 * i + 2;

    if (izq < n && A[izq] > A[mayor])
        mayor = izq;
    if (der < n && A[der] > A[mayor])
        mayor = der;

    if (mayor != i) {
        swap(A[i], A[mayor]);
        maxHeapify(A, n, mayor);
    }
}
void ejercicio4(int *A, int n, int m) {
    if (m < 1 || m > n) return;

    for (int i = n / 2 - 1; i >= 0; i--) {
        maxHeapify(A, n, i);
    }
    for (int i = n - 1; i >= n - m; i--) {
        swap(A[0], A[i]);
        maxHeapify(A, i, 0);
    }

    for (int i = n - m; i < n; i++) {
        cout << A[i] << " ";
    } cout << endl;
}

int main() {
    // Ejercicio 1
    int A[] = {20, 5, 15, 30, 3, 10, 8};
    cout << "Ejercicio 1: ";
    ejercicio1(A, 7, 3);

    // Ejercicio 2
    int L1[] = {1, 4, 7};
    int L2[] = {2, 5, 8};
    int L3[] = {3, 6, 9};
    int *listas[] = {L1, L2, L3};
    cout << "Ejercicio 2: ";
    ejercicio2(listas, 3, 3);

    // Ejercicio 3
    int B[] = {7, 10, 4, 3, 20, 15};
    cout << "Ejercicio 3: ";
    cout << ejercicio3(B, 6, 3) << endl;

    // Ejercicio 4
    int C[] = {12, 5, 30, 8, 25, 3, 17};
    cout << "Ejercicio 4: ";
    ejercicio4(C, 7, 3);

    return 0;
}
