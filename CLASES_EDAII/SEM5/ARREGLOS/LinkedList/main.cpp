#include "LinkedList.h"

int main() {
  LinkedList<int> *linkedA = new LinkedList<int>();
  linkedA->insert(10);
  linkedA->insert(12);
  linkedA->insert(14);
  linkedA->insert(15);

  linkedA->print();
  return 0;
}
