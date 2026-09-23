#include <iostream>
using namespace std;

class tablaHash {
private:
  int *tabla;
  int tam;
  int ocupados;

public:
  tablaHash(int n) {
    tam = n;
    ocupados = 0;
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
    int seEncuentra = false;

    // Tenemos como condiciones el arreglo vacio y cuando se cumple un ciclo
    while (tabla[pos] != -1 && intentos < tam && !seEncuentra) {
      pos = funcionHash(pos + 1);
      intentos++;

      if (tabla[pos] == k) {
        seEncuentra = true;
      }
    }
    // Si encuentra un lugar vacio esa sera la posicion en la que ira nuestro
    // elemento
    if (intentos < tam && !seEncuentra) {
      tabla[pos] = k;
      cout << "Dato ingresado en la posicion: " << pos << endl;
      cout << "Numero de colisiones: " << intentos << endl;
    } else {
      cout << "Esta full o ya se encontraba en el arreglo" << endl;
    }
  }

  void print() {
    for (int i = 0; i < tam; i++) {
      if (tabla[i] == -1) {
        cout << "VACIO" << endl;
      } else {
        cout << tabla[i] << endl;
      }
    }
  }

  int buscar(int k) {
    int pos = funcionHash(k);
    int intentos = 0;
    while (tabla[pos] != k && intentos < tam) {
      pos = funcionHash(pos + 1);
      intentos++;
    }
    if (intentos < tam) {
      cout << "Posicion: " << pos << endl;
    } else {
      cout << "El elemento no esta!" << endl;
    }
    return pos;
  }

  int factorCarga() { return ocupados / tam; }
};

int main() {
  tablaHash tablitaHash(5);
  tablitaHash.insertar(10);
  tablitaHash.insertar(20);
  tablitaHash.insertar(30);
  tablitaHash.insertar(40);
  tablitaHash.insertar(30);

  tablitaHash.buscar(30);
  tablitaHash.buscar(50);
  tablitaHash.print();
  return 0;
}
