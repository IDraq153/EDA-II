#include <iostream>
using std::cout;

int main() {
  int num1 = 20;
  int *pNum1 = &num1;

  cout << "Direccion de variable num1: " << pNum1 << std::endl;
  cout << "Accediendo a valor desde puntero: " << *pNum1 << std::endl;

  return 0;
}
