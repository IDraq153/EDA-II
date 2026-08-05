#ifndef NODO_H
#define NODO_H

template <typename T> class Nodo {
private:
  T item;
  Nodo<T> *izq;
  Nodo<T> *der;

public:
  // Constructores
  Nodo();
  Nodo(T item);

  // Getters
  T getItem();
  Nodo<T> *getIzq();
  Nodo<T> *getDer();

  // Setters
  void setItem(T item);
  void setIzq(Nodo<T> *nodo);
  void setDer(Nodo<T> *nodo);
};

// Inclusión pasiva obligatoria para enlazar la plantilla
#include "Nodo.tpp"

#endif
