#include <iostream>
using std::cout;

template <typename T> struct NodoDoble {
  T item;
  NodoDoble<T> *NodoSgt;
  NodoDoble<T> *NodoAnt;
};

template <typename T> void eliminarNodo(NodoDoble<T> *cabeza, T valorBuscar);
template <typename T> void mostrarNodos(NodoDoble<T> *cabeza);

int main() {
  cout << "ENLACES DOBLES" << std::endl;
  NodoDoble<int> *n1 = new NodoDoble<int>();
  NodoDoble<int> *n2 = new NodoDoble<int>();
  NodoDoble<int> *n3 = new NodoDoble<int>();

  n1->NodoSgt = n2;
  n2->NodoSgt = n3;
  n2->NodoAnt = n1;
  n3->NodoSgt = nullptr;
  n3->NodoAnt = n2;
  n1->NodoAnt = nullptr;

  n1->item = 5;
  n2->item = 10;
  n3->item = 1;
  mostrarNodos(n1);
  eliminarNodo(n1, 5);
  cout << std::endl;
  mostrarNodos(n2);
  return 0;
}

template <typename T> void eliminarNodo(NodoDoble<T> *cabeza, T valorBuscar) {
  bool flag = false;
  NodoDoble<int> *cabeSgt = cabeza->NodoSgt;
  while (cabeza != nullptr && !flag) {
    if (cabeza->item == valorBuscar) {
      flag = true;
    } else {
      cabeSgt = cabeSgt->NodoSgt;
      cabeza = cabeza->NodoSgt;
    }
  }
  if (!flag) {
    cout << "Item no encontrado";
  } else {
    if (cabeza->NodoAnt == nullptr) {
      cabeSgt->NodoAnt = nullptr;
      delete cabeza;
      cabeza = nullptr;
    } else if (cabeza->NodoSgt == nullptr) {
      cabeSgt = cabeza->NodoAnt;
      delete cabeza;
      cabeza = nullptr;
      cabeSgt->NodoSgt = nullptr;
    } else {
      cabeza->NodoAnt->NodoSgt = cabeza->NodoSgt;
      cabeza->NodoSgt->NodoAnt = cabeza->NodoAnt;
      delete cabeza;
      cabeza = nullptr;
    }
  }
}
template <typename T> void mostrarNodos(NodoDoble<T> *cabeza) {
  while (cabeza != nullptr) {
    cout << cabeza->item << '\t';
    cabeza = cabeza->NodoSgt;
  }
}
