#include <iostream>
using std::cout;

template <typename T> struct NodoDoble {
  T item;
  NodoDoble<T> *NodoSgt;
  NodoDoble<T> *NodoAnt;
};

template <typename T> void eliminarNodo(NodoDoble<T> *cabeza, T valorBuscar);

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

  n1->item = 5;
  n2->item = 10;
  n3->item = 1;
  eliminarNodo(n2, 10);
  return 0;
}

template <typename T> void eliminarNodo(NodoDoble<T> *cabeza, T valorBuscar) {
  bool flag = false;
  while (cabeza != nullptr && !flag) {
    if (cabeza->item == valorBuscar) {
      flag = true;
    } else {
      cabeza = cabeza->NodoSgt;
    }
  }
  if (!flag) {
    cout << "Item no encontrado";
  } else {
    cout << cabeza->item << std::endl;
  }
}
