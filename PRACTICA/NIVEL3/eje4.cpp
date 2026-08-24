#include <iostream>
using std::cout;

template <typename T> struct Nodo {
  Nodo<T> *sgtNodo;
  T item;
};

void recorreNodos(Nodo<int> *nodoP);

int main() {
  cout << "TRABAJANDO CON NODOS" << std::endl;
  Nodo<int> *pNodo = new Nodo<int>();
  Nodo<int> *pNodo2 = new Nodo<int>();
  pNodo->item = 5;
  pNodo2->item = 10;
  pNodo->sgtNodo = pNodo2;
  pNodo2->sgtNodo = nullptr;

  // cout << "Valor en el nodo: " << pNodo->item << std::endl;
  // cout << "Valor en el sgtNodo: " << pNodo->sgtNodo->item << std::endl;
  recorreNodos(pNodo);
  cout << std::endl;

  return 0;
}

void recorreNodos(Nodo<int> *nodoP) {
  Nodo<int> *aux = nodoP;
  while (aux != nullptr) {
    cout << aux->item << '\t';
    aux = aux->sgtNodo;
  }
}
