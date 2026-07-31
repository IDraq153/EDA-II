template <typename T> class nodoArbol {
private:
  T item;
  nodoArbol<T> *nodoIzq;
  nodoArbol<T> *nodoDer;
  nodoArbol<T> *cabeza;

public:
  nodoArbol() {
    nodoDer = nullptr;
    nodoIzq = nullptr;
    item = T{};
  }
  nodoArbol(T item, nodoArbol<T> *nodoIzq, nodoArbol<T> *nodoDer,
            nodoArbol<T> *cabeza) {
    this->item = item;
    this->nodoIzq = nodoIzq;
    this->nodoDer = nodoDer;
    this->cabeza = cabeza;
  }

  T getItem() { return item; }
  nodoArbol<T> *getNodoIzq() { return nodoIzq; }
  nodoArbol<T> *getNodoDer() { return nodoDer; }
  nodoArbol<T> *getCabeza() { return cabeza; }

  void setItem(T item) { this->item = item; }
  void setNodoIzq(nodoArbol<T> *nodo) { this->nodoIzq = nodo; }
  void setNodoDer(nodoArbol<T> *nodo) { this->nodoDer = nodo; }
  void setCabeza(nodoArbol<T> *cabeza) { this->cabeza = cabeza; }
};
