#include "Nodo.h" // Solo incluimos el .h, que ya jala automáticamente al .cpp
#include <iostream>

int main() {
  // Creamos un nodo con el valor 50 usando tu nuevo constructor
  Nodo<int> *miNodo = new Nodo<int>(50);

  std::cout << "El valor del nodo es: " << miNodo->getItem() << std::endl;

  delete miNodo;
  miNodo = nullptr;
  return 0;
}
