#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "LinkedList.h"

template <typename T> class HashTable {
private:
  int size;
  LinkedList<T> *tabla;

public:
  HashTable(int n) {
    size = n;
    tabla = new LinkedList<T>[size];
  }
  int hashFunction(int key) { return key % size; }
  void insert(int key) {
    int pos = hashFunction(key);
    tabla[pos].insert(key);
  }
  void print() {
    for (int i = 0; i < size; i++) {
      std::cout << "Indice " << i << ": ";
      tabla[i].print();
    }
  }
  void count() {
    for (int i = 0; i < size; i++) {
      std::cout << "Tamanio " << i << ": " << tabla[i].count() << ' ';
    }
    std::cout << std::endl;
  }
};

#endif // !HASHTABLE_H
