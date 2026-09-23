#include <iostream>
using std::cin;
using std::cout;

// PROGRAMA PARA INGRESAR ELEMENTOS A AREGGLO Y IMPRIMIRLOS
int main() {
  int n;
  cout << "Arreglo de cuantos elementos: ";
  cin >> n;

  // Inicializamos el arreglo con valores nulos o 0
  int *arreglo = new int[n]();

  for (int i = 0; i < n; i++) {
    cout << "Ingrese elemento: ";
    cin >> arreglo[i];
  }

  for (int i = 0; i < n; i++) {
    cout << arreglo[i] << '\t';
  }
  cout << std::endl;
  for (int i = n - 1; i >= 0; i--) {
    cout << arreglo[i] << '\t';
  }

  cout << std::endl;
  delete[] arreglo;
  return 0;
}
