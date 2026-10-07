#include "Heap.h"

int main() {
  Heap<int> heapcito(15);
  heapcito.insert(90);
  heapcito.insert(80);
  heapcito.insert(66);
  heapcito.insert(67);
  heapcito.insert(50);
  heapcito.insert(23);
  heapcito.insert(17);
  heapcito.insert(16);
  heapcito.insert(15);
  heapcito.insert(12);
  heapcito.insert(11);
  heapcito.insert(7);

  heapcito.print();
  return 0;
}
