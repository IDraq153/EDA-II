#include <iostream>
using std::cout;

void invertirArreglo(int *arreglo) {
  int *tmp = &arreglo[4];
  int aux = 0;
  for (int i = 0; i < 5 / 2; i++) {
    aux = *arreglo;
    *arreglo = *tmp;
    *tmp = aux;

    arreglo++;
    tmp--;
  }
}
void encontraSMayor(int *arreglo) { int contador = 1; }

int main() {
  int *arreglo = new int[5]{1, 2, 3, 4, 5};

  // El analisis demuestra que por cadia numero en este arreglo estamos usando
  // 4bits en memoria Al guardar en el heap estos en un arreglo se van guardando
  // uno pegados a otros en formato hexadecimal se ven las direcciones
  invertirArreglo(arreglo);
  for (int i = 0; i < 5; i++) {
    cout << "Direccion de primer elemento: " << arreglo << std::endl;
    cout << "Elemento en la posicion 0: " << *arreglo << std::endl;
    arreglo++;
  }

  return 0;
}
