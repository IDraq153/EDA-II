#include <iostream>
using std::cout;

void funcion(int *pNum) { *pNum = 100; }

int main() {
  int *pNum = new int(20);
  cout << *pNum << std::endl;
  funcion(pNum);
  cout << *pNum << std::endl;

  delete pNum;
  return 0;
}
