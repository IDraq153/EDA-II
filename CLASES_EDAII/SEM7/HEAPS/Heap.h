#ifndef HEAP_H
#define HEAP_H

#include <iostream>

template <typename T> class Heap {
private:
  int *heap;
  int last;
  int tam;

public:
  Heap(int n) {
    tam = n;
    heap = new int[tam];
    last = -1;
  }
  void insert(int n) {
    if (last + 1 >= tam) {
      std::cout << "Heap lleno" << std::endl;
    } else {
      last++;
      heap[last] = n;
      int i = last;
      while (i > 0 && heap[i] < heap[(i - 1) / 2]) {
        std::swap(heap[i], heap[(i - 1) / 2]);
        i = (i - 1) / 2;
      }
    }
  }
  void print() {
    for (int i = 0; i < last + 1; i++) {
      std::cout << heap[i] << " - ";
    }
    std::cout << std::endl;
  }

  int menor() {
    if (last == -1) {
      std::cout << "Tu HEAP esta vacio!" << std::endl;
      return -1;
    }

    int min = heap[0];
    heap[0] = heap[last];
    last--;

    int i = 0;
    while (i < last) {
      int izq = 2 * i + 1;
      int der = 2 * i + 2;
      int menorIdx = i;
      if (izq <= last && heap[izq] < heap[menorIdx]) {
        menorIdx = izq;
      }
      if (der <= last && heap[der] < heap[menorIdx]) {
        menorIdx = der;
      }
      if (menorIdx == i) {
        break;
      }
      std::swap(heap[i], heap[menorIdx]);
      i = menorIdx;
    }

    return min;
  }
};

#endif
