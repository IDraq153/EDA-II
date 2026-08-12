#include <iostream>
#include <memory>
using std::cout;

void UseRawPointer() {
  // Usamos raw pointer
  int *pNum = new int(12);
  // Imprimir
  cout << *pNum << std::endl;
  // Liberar memoria
  delete pNum;
}
void UseSmartPointer() {
  std::unique_ptr<int> num(new int(12));
  cout << *num << std::endl;
}

int main() {

  cout << "RAW POINTER" << std::endl;
  UseRawPointer();
  cout << "SMART POINTER" << std::endl;
  UseSmartPointer();

  return 0;
}
