#include <iostream>
using std::cout;

int main() {
  cout << "RECCORIENDO UN ARREGLO CON PUNTEROS\n";
  int numeros[5] = {1, 2, 3, 4, 5};

  int *pos = numeros;
  int tamanio = sizeof(numeros) / sizeof(numeros[0]);

  for (int i = 0; i < tamanio; i++) {
    cout << *(pos + i) << '\t';
  }
  cout << std::endl;
  return 0;
}
