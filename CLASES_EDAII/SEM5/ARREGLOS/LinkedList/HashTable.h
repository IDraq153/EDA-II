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
  void insertInicio(int key) {
    int pos = hashFunction(key);
    tabla[pos].insertarAlInicio(key);
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

  void search(T key) {
    int pos = hashFunction(key);
    int encontrado = tabla[pos].search(key);
    if (encontrado) {
      std::cout << "Tu item fue encontrado" << std::endl;
    } else {
      std::cout << "Tu item no existe!" << std::endl;
    }
  }

  void deleteNode(T key) {
    int pos = hashFunction(key);
    tabla[pos].deleteNode(key);
  }

  void masElementos() {
    int max = 0;
    int pos = 0;
    for (int i = 0; i < size; i++) {
      if (max < tabla[i].count()) {
        max = tabla[i].count();
        pos = i;
      }
    }
    std::cout << "La posicion con mas caracteres es la i con: " << max
              << " nodos" << std::endl;
  }
};
#endif // !HASHTABLE_H
