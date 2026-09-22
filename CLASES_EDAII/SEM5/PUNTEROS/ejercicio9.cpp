#include <iostream>
using std::cout;

int main() {
  double numero = 10.5;
  double *pNum1 = &numero;
  double *pNum2 = &numero;

  cout << pNum1 << std::endl;
  cout << pNum2 << std::endl;

  int *pNumero = nullptr;
  cout << *pNumero << std::endl;
  return 0;
}
