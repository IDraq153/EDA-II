#include <iostream>

void ejercicio1() {
    // Ejercicio 1
    std::cout << "EJERCICIO 1" << std::endl;
    int n = 0;
    std::cout << "Ingrese n: ";
    std::cin >> n;
    
    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        std::cout << "Ingrese elemento " << (i+1) << ": ";
        std::cin >> arr[i];
    } std::cout << std::endl;
    
    std::cout << "NORMAL" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << '\t';
    } std::cout << std::endl;
    
    std::cout << "INVERSO" << std::endl;
    for (int i = n - 1; i >= 0; i--) {
        std::cout << arr[i] << '\t';
    } std::cout << std::endl;
    
    delete[] arr;
}
void ejercicio2() {
    // Ejercicio 2
    std::cout << "EJERCICIO 2" << std::endl;
    int n = 0;
    std::cout << "Ingrese n: ";
    std::cin >> n;
    
    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        std::cout << "Ingrese elemento " << (i+1) << ": ";
        std::cin >> arr[i];
    } std::cout << std::endl;
    
    int max = arr[0], min = arr[0], sumaTotal = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
        sumaTotal = sumaTotal + arr[i];
    }
    std::cout << "Mayor: " << max << std::endl;
    std::cout << "Menor: " << min << std::endl;
    std::cout << "Suma Total: " << sumaTotal << std::endl;
    std::cout << "Promedio: " << (float) sumaTotal / n << std::endl;
    
    delete[] arr;
}
void ejercicio3() {
    // Ejercicio 3
    std::cout << "EJERCICIO 3" << std::endl;
    int n = 0;
    std::cout << "Ingrese n: ";
    std::cin >> n;
    
    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        std::cout << "Ingrese elemento " << (i+1) << ": ";
        std::cin >> arr[i];
    } std::cout << std::endl;
    
    int x = 0;
    std::cout << "Ingrese x: ";
    std::cin >> x;
    
    bool encontrado = false;
    for (int i = 0; i < n; i++) {
        if(arr[i] == x) {
            std::cout << "Valor encontrado en: " << i << std::endl;
            encontrado = true;
        }
    } 
    if (!encontrado) { std::cout << "No se encontro ese valor!" << std::endl;}
}
int* ejercicio4(int n) {
    // Ejercicio 4
    std::cout << "EJERCICIO 4" << std::endl;
    int *arr = new int[n];
    int value = 10;
    for (int i = 0; i < n; i++) {
        arr[i] = value;
        value+=10;
    } 
    return arr;
}
int* ejercicio5(int* arr, int n) {
    // Ejercicio 5
    std::cout << "EJERCICIO 5" << std::endl;
    int* arrC = new int[n];
    for (int i = 0; i < n; i++) {
        arrC[i] = arr[i];
    } return arrC;
}
int* ejercicio6(int* arr, int n) {
    // Ejercicio 6
    std::cout << "EJERCICIO 6" << std::endl;
    int conta = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) conta++;        
    }
    int *arrD = new int[conta];
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            arrD[j] = arr[i];
            j++;
        } 
    } return arrD;
}
int* ejercicio7(int* arr, int* arr2, int n1, int n2) {
    // Ejercicio 7
    std::cout << "EJERCICIO 7" << std::endl;
    int *arreglo = new int[n1+n2];
    for (int i = 0; i < n1; i++) {
        arreglo[i] = arr[i];
    }
    int j = 0;
    for (int i = n1; i < n1+n2; i++) {
        arreglo[i] = arr2[j];
        j++;
    }
    return arreglo;
}
int* ejercicio8(int *arr, int n) {
    // Ejercicio 8
    std::cout << "EJERCICIO 8" << std::endl;
    int i = 0;
    int valor = 0;
    
    while (valor != -1) {
        std::cout << "Ingrese: ";
        std::cin >> valor; 
        std::cout << "";
        
        if (valor == -1) break;
        
        if (i == n) {
            int *arreglo = new int[n*2];
            for (int j = 0; j < n; j++) {
                arreglo[j] = arr[j];
            } 
            delete[] arr;
            arr = arreglo;
            n = n*2;
        }
        arr[i] = valor;
        i++;
    }
    return arr;
}
int* ejercicio9(int *arr, int n, int pos, int value) {
    // Ejercicio 9
    std::cout << "EJERCICIO 9" << std::endl;
    int *arreglo = new int[n+1];
    
    // val = 2 al medio
    // 1,2,3,4
    // 1,2,2,,3,4

    for (int i = 0; i < n+1; i++) {
        if (i == pos-1) arreglo[i] = value;
        else if (i >= pos) arreglo[i] = arr[i - 1]; 
        else arreglo[i] = arr[i];        
    }
    delete[] arr;
    return arreglo;
}
int* ejercicio10(int *arr, int n, int pos) {
    // Ejercicio 10
    std::cout << "EJERCICIO 10" << std::endl;
    int *arreglo = new int[n-1];
    // 5,4,3,2()
    // 0,1,2,3
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (i == pos - 1) continue;        

        arreglo[j] = arr[i];
        j++;
    } delete[] arr;
    arr = arreglo;
    return arr;
}
void imprimir(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << '\t';        
    } std::cout << std::endl;
}
int main() {
    // ejercicio1();
    // ejercicio2();
    // ejercicio3();
    
    // int* arr = ejercicio4(3);
    // for (int i = 0; i < 3; i++) {
        //     std::cout << arr[i] << '\t';
        // } std::cout << std::endl;
        // delete[] arr;
        
        // int *arr = new int[4]{1,2,3,4};
        // int *arr2 = ejercicio5(arr, 4);
        
        // std::cout << "ANTES" << std::endl;
        // imprimir(arr, 4);
        // imprimir(arr2, 4);
        
        // std::cout << "DESPUES" << std::endl;
        // arr2[0] = 20;
        // imprimir(arr, 4);
        // imprimir(arr2, 4);
        
        // delete[] arr;
        // delete[] arr2;
        
        // int *arr = new int[5]{1,2,3,4,5};
        // int *arrD = ejercicio6(arr, 5);
        // imprimir(arr, 5);
        // imprimir(arrD, 2);
        
        // delete[] arr;
        // delete[] arrD;
        
        // int *arr1 = new int[3]{1,2,3};
        // int *arr2 = new int[3]{4,5,6};
        // int *arr3 = ejercicio7(arr1,arr2,3,3);
        // imprimir(arr3, 6);
        // delete[] arr1;
        // delete[] arr2;
        // delete[] arr3;
        
        // int *arr = new int[5];
        // int *arreglo = ejercicio8(arr, 5);
        // delete[] arr;
        // delete[] arreglo;
        
        // int *arr = new int[5]{1,2,3,4,5};
        // int *arreglo = ejercicio9(arr, 5, 3, 3);
        // imprimir(arreglo, 6);
        // delete[] arr;
        // delete[] arreglo;
        
        int *arr = new int[5]{1,2,3,4,5};
        int *arreglo = ejercicio10(arr, 5, 3);
        imprimir(arreglo, 4);
        delete[] arr;
        delete[] arreglo;
    return 0;
}