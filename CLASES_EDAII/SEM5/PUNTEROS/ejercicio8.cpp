#include <iostream>
using std::cout;

void funcion(int *pNum1, int *pNUm2) { *pNum1 = *pNum1 + *pNUm2; }

int main() {
  int num1 = 5;
  int num2 = 3;

  funcion(&num1, &num2);
  cout << num1 << std::endl;

  return 0;
}
