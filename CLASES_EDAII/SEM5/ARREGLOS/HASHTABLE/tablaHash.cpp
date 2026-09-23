#include <iostream>
using namespace std;

class tablaHash {
private:
  int *tabla;
  int tam;

public:
  tablaHash(int n) {
    tam = n;
    tabla = new int[tam];
    for (int i = 0; i < tam; i++) {
      tabla[i] = -1;
    }
  }

  int funcionHash(int k) { return k % tam; }

  void insertar(int k) {
    // Esta funcion tiene como objetivo inserar un elemento
    // primero saca el indice mediante el modulo del valor ingresado
    int intentos = 0;
    int pos = funcionHash(k);

    // Tenemos como condiciones el arreglo vacio y cuando se cumple un ciclo
    while (tabla[pos] != -1 && intentos < tam) {
      pos = funcionHash(pos + 1);
      intentos++;
    }

    // Si encuentra un lugar vacio esa sera la posicion en la que ira nuestro
    // elemento
    if (intentos < tam) {
      tabla[pos] = k;
    } else {
      cout << "Esta full" << endl;
    }
  }

  void print() {
    for (int i = 0; i < tam; i++) {
      cout << tabla[i] << endl;
    }
  }
};

int main() {
  tablaHash tablitaHash(10);
  tablitaHash.insertar(10);
  tablitaHash.insertar(20);
  tablitaHash.insertar(30);
  tablitaHash.insertar(40);
  tablitaHash.insertar(50);

  tablitaHash.print();
  return 0;
}
