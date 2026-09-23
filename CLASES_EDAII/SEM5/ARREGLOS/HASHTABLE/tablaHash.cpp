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
    int intentos = 0;
    int pos = funcionHash(k);

    while (tabla[pos] != -1 && intentos < tam) {
      pos = funcionHash(pos + 1);
      intentos++;
    }
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
