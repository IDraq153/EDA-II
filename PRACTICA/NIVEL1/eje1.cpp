#include <iostream>
using std::cout;

void intercambiarValores(int *p1, int *p2);

int main() {
  cout << "EJERCICIO 1 INTERCAMBIANDO VALORES\n";
  int *p1 = nullptr;
  int *p2 = nullptr;

  int n1 = 2;
  int n2 = 10;

  p1 = &n1;
  p2 = &n2;

  cout << "Puntero p1: " << p1 << '\n';
  cout << "Contenido p1: " << *p1 << '\n';
  cout << "Puntero p2: " << p2 << '\n';
  cout << "Contenido p2: " << *p2 << '\n';

  cout << std::endl;
  intercambiarValores(p1, p2);

  return 0;
}

void intercambiarValores(int *p1, int *p2) {
  int temp = *p2;
  *p2 = *p1;
  *p1 = temp;

  cout << "VALORES INTERCAMBIADOS\n";
  cout << "Puntero p1: " << p1 << '\n';
  cout << "Contenido p1: " << *p1 << '\n';
  cout << "Puntero p2: " << p2 << '\n';
  cout << "Contenido p2: " << *p2 << '\n';
}
