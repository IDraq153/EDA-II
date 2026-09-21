#include <iostream>
using std::cout;

int main() {
  float num1 = 10.5;
  float *pNum = &num1;

  cout << "Direccion float: " << pNum << std::endl;
  cout << "Valor del puntero: " << *pNum << std::endl;

  pNum = nullptr;
  delete pNum;
  return 0;
}
