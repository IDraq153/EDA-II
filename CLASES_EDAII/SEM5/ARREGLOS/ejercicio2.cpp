#include <iostream>
using std::cin;
using std::cout;

int main() {
  int n;
  int max = 0;
  int min = 999;
  int suma = 0;
  float promedio;

  cout << "EJERCICIO 2 DE ARREGLOS" << std::endl;
  cout << "Ingrese su n elementos: ";
  cin >> n;

  int *arreglo = new int[n];
  for (int i = 0; i < n; i++) {
    cout << "Ingrese elemento " << (i + 1) << " :";
    cin >> arreglo[i];

    if (arreglo[i] > max) {
      max = arreglo[i];
    }
    if (arreglo[i] < min) {
      min = arreglo[i];
    }

    suma += arreglo[i];
  }
  promedio = (float)suma / n;

  cout << "\nEl valor maximo: " << max;
  cout << "\nEl valor minimo: " << min;
  cout << "\nLa suma total es de: " << suma;
  cout << "\nEl promedio es de: " << promedio << std::endl;

  delete[] arreglo;
  return 0;
}
