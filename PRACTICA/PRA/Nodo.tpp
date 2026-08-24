template <typename T> Nodo<T>::Nodo() {
  item = T{};
  izq = nullptr;
  der = nullptr;
}

template <typename T> Nodo<T>::Nodo(T item) {
  this->item = item;
  this->izq = nullptr;
  this->der = nullptr;
}

template <typename T> T Nodo<T>::getItem() { return item; }

template <typename T> Nodo<T> *Nodo<T>::getIzq() { return izq; }

template <typename T> Nodo<T> *Nodo<T>::getDer() { return der; }

template <typename T> void Nodo<T>::setItem(T item) { this->item = item; }

template <typename T> void Nodo<T>::setIzq(Nodo<T> *nodo) { this->izq = nodo; }

template <typename T> void Nodo<T>::setDer(Nodo<T> *nodo) { this->der = nodo; }
