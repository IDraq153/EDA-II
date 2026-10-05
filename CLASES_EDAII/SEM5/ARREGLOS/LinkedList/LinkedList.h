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

  bool search(int key) {
    Node<T> *tmp = root;
    if (root == nullptr) {
      std::cout << "NO EXISTE TU LISTA!" << std::endl;
      return false;
    } else {
      bool seEncontro = false;
      while (tmp != nullptr && !seEncontro) {
        if (tmp->getValue() == key) {
          seEncontro = true;
          return true;
        } else {
          tmp = tmp->getSgtNode();
        }
      }
      return false;
    }
  }

  bool deleteNode(T key) {
    if (search(key)) {
      Node<T> *actual = root;
      Node<T> *anterior = nullptr;

      if (actual->getValue() == key) {
        root = actual->getSgtNode();
        return 1;
      }

      while (actual != nullptr && actual->getValue() != key) {
        anterior = actual;
        actual = actual->getSgtNode();
      }
      anterior->setSgtNode(actual->getSgtNode());
      return true;

    } else {
      std::cout << "El nodo no existe!" << std::endl;
      return false;
    }
  }

  int count() {
    int count = 0;
    if (root == nullptr) {
      return count;
    } else {
      Node<T> *tmp = root;
      while (tmp != nullptr) {
        tmp = tmp->getSgtNode();
        count++;
      }
      return count;
    }
  }
};

#endif
