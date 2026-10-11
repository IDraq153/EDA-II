#include "Heap.h"

int main() {
  Heap<int> heapcito(15);
  heapcito.insertM(90);
  heapcito.insertM(80);
  heapcito.insertM(66);
  heapcito.insertM(67);
  heapcito.insertM(50);
  heapcito.insertM(23);
  heapcito.insertM(17);
  heapcito.insertM(16);
  heapcito.insertM(15);
  heapcito.insertM(12);
  heapcito.insertM(11);
  heapcito.insertM(7);

  std::cout << heapcito.mayor() << std::endl;
  heapcito.print();
  return 0;
}
