#include "LinkedList.h"

int main() {
  LinkedList<int> *linkedA = new LinkedList<int>();
  linkedA->insert(10);
  linkedA->insert(12);
  linkedA->insert(14);
  linkedA->insert(15);
  std::cout << linkedA->search(12) << std::endl;
  std::cout << linkedA->search(11) << std::endl;

  linkedA->deleteNode(15);
  linkedA->insert(16);

  linkedA->print();
  return 0;
}
