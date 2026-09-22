#include <iostream>
using std::cout;

int main() {
  int x = 10;
  int *pX = &x;

  cout << x << std::endl;
  *pX = 20;
  cout << x << std::endl;

  pX = nullptr;
  delete pX;
  return 0;
}
