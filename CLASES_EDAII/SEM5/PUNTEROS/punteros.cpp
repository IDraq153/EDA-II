#include <iostream>

void cambiar120(int* p) { *p = 120; }
void sumaPuntero(int* p, int* z) { *p = *p + *z; }

int main() {
    // Ejercicio 1
    std::cout << "EJERCICIO 1" << std::endl;
    int n = 5;
    int *pN = &n;
    std::cout << "Direccion: " << pN << std::endl;
    std::cout << "Valor: " << *pN << std::endl;
    pN = nullptr;
    
    // Ejercicio 2
    std::cout << "EJERCICIO 2" << std::endl;
    int n1 = 15;
    int n2 = 25;
    pN = &n1;
    std::cout << "Direccion: " << pN << std::endl;
    std::cout << "Valor: " << *pN << std::endl;
    pN = &n2;
    std::cout << "Direccion: " << pN << std::endl;
    std::cout << "Valor: " << *pN << std::endl;
    pN = nullptr;
    
    //Ejercicio 3
    std::cout << "EJERCICIO 3" << std::endl;
    int x = 10;
    pN = &x;
    std::cout << "Direccion: " << pN << std::endl;
    std::cout << "Valor: " << *pN << std::endl;
    *pN = 20;
    std::cout << "Direccion: " << pN << std::endl;
    std::cout << "Valor: " << *pN << std::endl;
    pN = nullptr;
    
    //Ejercicio 4
    std::cout << "EJERCICIO 4" << std::endl;
    float flot = 2.3;
    float *pF = &flot;
    std::cout << "Direccion: " << pF << std::endl;
    std::cout << "Valor: " << *pF << std::endl;
    pF = nullptr;
    
    //Ejercicio 5
    std::cout << "EJERCICIO 5" << std::endl;
    int a = 5;
    int b = 10;
    int tmp = a;
    pN = &a;
    *pN = b;
    pN = &b;
    *pN = tmp;
    std::cout << "Valor: " << a << std::endl;
    std::cout << "Valor: " << b << std::endl;
    
    //Ejercicio 6
    std::cout << "EJERCICIO 6" << std::endl;
    char c = 'A';
    char *pC = &c;
    std::cout << "Valor: " << *pC << std::endl;
    *pC = 'Z';
    std::cout << "Valor: " << *pC << std::endl;
    
    //Ejercicio 7
    std::cout << "EJERCICIO 7" << std::endl;
    int y = 10;
    std::cout << "Valor: " << y << std::endl;
    int *py = &y;
    cambiar120(py);
    std::cout << "Valor: " << y << std::endl;
    
    //Ejercicio 8
    std::cout << "EJERCICIO 8" << std::endl;
    int w = 10;
    int e = 20;
    int *pW = &w;
    int *pE = &e;
    sumaPuntero(pW,pE);
    std::cout << w << std::endl;
    
    //Ejercicio 9
    std::cout << "EJERCICIO 9" << std::endl;
    double aa = 12.3;
    double* pAa = &aa;
    double* pAa2 = &aa;
    std::cout << "Direccion: " << pAa << std::endl;
    std::cout << "Direccion: " << pAa2 << std::endl;
    std::cout << "Valor: " << *pAa << std::endl;
    std::cout << "Valor: " << *pAa2 << std::endl;
    
    //Ejercicio 10
    std::cout << "EJERCICIO 10" << std::endl;
    int* aaa = nullptr;
    std::cout << *aaa << std::endl;
    return 0;
    // segmentation fault lee o trata de escribir en una zona de memoria que no tiene permiso de extraer
    // nullptr porcion que dememoria que es reservado para evitar corrupcion de memoria
}