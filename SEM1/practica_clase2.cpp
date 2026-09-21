#include <chrono>
#include <iostream>

using namespace std;
using namespace std::chrono;

int main() {
  long long N;
  cout << "Ingrese N: ";
  cin >> N;

  volatile long long contador = 0;
  auto inicio = high_resolution_clock::now();

  for (long long i = 0; i < N; i++) {
    for (long long j = 0; j < N; j++) {
      contador++;
    }
  }

  auto fin = high_resolution_clock::now();
  auto duracion = duration_cast<microseconds>(fin - inicio);

  cout << "Tiempo: " << duracion.count() << " microsegundos" << endl;
  return 0;
}
