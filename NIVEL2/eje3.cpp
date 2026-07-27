#include <iostream>
using std::cin;
using std::cout;

int main() {
  int tamanio = 0;
  cout << "USANDO EL HEAP MEMORIA DINAMICA\n";
  cout << "Ingrese el tamaño del arreglo: ";
  cin >> tamanio;

  int *pNumeros = nullptr;
  pNumeros = new int[tamanio];

  for (int i = 0; i < tamanio; i++) {
    pNumeros[i] = i + 1;
  }
  for (int i = 0; i < tamanio; i++) {
    cout << pNumeros[i] << '\t';
  }
  cout << std::endl;

  int *pNumeros2 = nullptr;
  pNumeros2 = new int[tamanio + 1];

  for (int i = 0; i < tamanio; i++) {
    pNumeros2[i] = pNumeros[i];
  }
  pNumeros2[tamanio] = tamanio + 1;
  for (int i = 0; i < tamanio + 1; i++) {
    cout << pNumeros2[i] << '\t';
  }
  cout << std::endl;
  delete[] pNumeros;
  pNumeros = pNumeros2;

  delete[] pNumeros2;
  pNumeros2 = nullptr;

  return 0;
}
