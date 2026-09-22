#include <iostream>
using std::cout;

// Los delete solo van para cuando asigne memoria dinamicamente
// Comando new memoria dinamica, si no es stack solo vive a lo largo de la
// funcion
int main() {
  int a = 12;
  int b = 23;
  int temp = 0;

  int *pNum = &a;
  int *pNum2 = &b;

  cout << "VALOR DE A: " << a << std::endl;
  cout << "VALOR DE B: " << b << std::endl;

  temp = *pNum;
  *pNum = *pNum2;
  *pNum2 = temp;

  cout << "VALOR DE A: " << a << std::endl;
  cout << "VALOR DE B: " << b << std::endl;

  return 0;
}
