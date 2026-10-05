#include "HashTable.h"

int main() {
  HashTable<int> tablita(10);
  tablita.insert(1);
  tablita.insert(20);
  tablita.insert(35);
  tablita.insert(4);
  tablita.insert(50);
  tablita.insert(71);
  tablita.insert(72);
  tablita.insert(0);
  tablita.insert(9);

  tablita.print();
  tablita.count();

  // LinkedList<int> lista;
  // lista.insert(1);
  // lista.insert(1);
  // lista.insert(1);
  // lista.insert(1);
  // lista.insert(1);
  // std::cout << lista.count() << std::endl;
  //
  // LinkedList<int> *linkedA = new LinkedList<int>();
  // linkedA->insert(10);
  // linkedA->insert(12);
  // linkedA->insert(14);
  // linkedA->insert(15);
  // std::cout << linkedA->search(12) << std::endl;
  // std::cout << linkedA->search(11) << std::endl;
  //
  // linkedA->deleteNode(15);
  // linkedA->insert(16);
  //
  // linkedA->print();
  //

  return 0;
}
