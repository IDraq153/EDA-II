#include <iostream>
using std::cout;

int main() {
  char c = 'A';
  char *pChar = &c;

  cout << "Direccion de valor: " << pChar << std::endl;
  cout << "valor: " << *pChar << std::endl;

  *pChar = 'Z';
  cout << "Direccion de valor: " << pChar << std::endl;
  cout << "valor: " << *pChar << std::endl;

  return 0;
}
