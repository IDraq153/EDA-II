#include <iostream>
using std::cout;

int main() {
  int num1 = 1;
  int num2 = 2;

  // Le pasamos la direccion al puntero;
  int *pNum = &num1;
  cout << *pNum << std::endl;

  // Ponemos otra direccion al puntero
  pNum = &num2;
  cout << *pNum << std::endl;

  pNum = nullptr;
  delete pNum;
  return 0;
}
