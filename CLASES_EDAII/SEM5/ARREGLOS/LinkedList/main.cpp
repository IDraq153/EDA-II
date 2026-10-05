#include "HashTable.h"

int main() {
  HashTable<int> tablita(10);
  tablita.insertInicio(1);
  tablita.insertInicio(20);
  tablita.insertInicio(35);
  tablita.insertInicio(4);
  tablita.insertInicio(50);
  tablita.insertInicio(71);
  tablita.insertInicio(72);
  tablita.insertInicio(0);
  tablita.insertInicio(9);

  tablita.print();
  // tablita.count();
  tablita.masElementos();

  // LinkedList<int> lista;
  // lista.insert(1);
  // lista.insert(11);
  // lista.insert(3);
  // lista.insert(2);
  // lista.insert(12);
  // lista.deleteNode(1);
  // lista.print();
  // std::cout << lista.count() << std::endl;
  // lista.apuntarNodoFInal();
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
