#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <iostream>

template <typename T> class LinkedList {
private:
  Node<T> *root;

public:
  LinkedList() { root = nullptr; }

  void print() {
    Node<T> *tmp = root;
    while (tmp != nullptr) {
      std::cout << tmp->getValue() << '\t';
      tmp = tmp->getSgtNode();
    }
    std::cout << std::endl;
  }

  void insert(T value) {
    Node<T> *nodoNuevo = new Node<T>(value);
    if (root == nullptr) {
      root = nodoNuevo;
    } else {
      Node<T> *tmp = root;
      while (tmp->getSgtNode() != nullptr) {
        tmp = tmp->getSgtNode();
      }
      tmp->setSgtNode(nodoNuevo);
    }
  }
};

#endif
