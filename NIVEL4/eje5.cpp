#include <iostream>
#include <string>
using std::cout;
using string_t = std::string;

template <typename T> class CajaFuerte {
private:
  T item;
  bool estaBloqueado;

public:
  CajaFuerte() {
    item = T{};
    estaBloqueado = false;
  }
  CajaFuerte(T item, bool estaBloqueado) {
    this->item = item;
    this->estaBloqueado = estaBloqueado;
  }

  void bloquearCaja() { this->estaBloqueado = true; }
  T sacarValor() {
    if (this->estaBloqueado == true) {
      cout << "La caja esta bloqueada!, retornando valor defecto" << std::endl;
      return T{};
    }
    return this->item;
  }
};

int main() {
  cout << "CLASES Y NODOS" << std::endl;
  CajaFuerte<int> *cajaInt = new CajaFuerte<int>(5, false);
  CajaFuerte<string_t> *cajaString = new CajaFuerte<string_t>("XD", false);

  cout << cajaString->sacarValor() << std::endl;
  cajaInt->bloquearCaja();
  cout << cajaInt->sacarValor() << std::endl;

  return 0;
}
