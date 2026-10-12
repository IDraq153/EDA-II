#include <iostream>

int main() {
    int arr[] = {1,2,3,4,5};
    int mayor = arr[0];
    for (int i = 1; i < sizeof(arr)/sizeof(arr[0]); i++) {
        mayor = arr[i] > mayor ? arr[i] : mayor; 
    } std::cout << "El mayor es: " << mayor << std::endl;
    
    int arr2[] = {1,2,3,4,5,6,7,8,9,10};
    int prom = 0;
    for (int i = 0; i < sizeof(arr2)/sizeof(arr2[0]) ; i++) {
        prom = prom + arr2[i];
    } std::cout << "El promedio es: " << (float) prom / (sizeof(arr2)/sizeof(arr2[0])) << std::endl;
    
    int num = 0, contaP = 0, contaI = 0;
    for (int i = 0; i < 8; i++) {
        std::cout << "Ingrese " << (i+1) << ": ";
        std::cin >> num; 

        if(num % 2 == 0) contaP++;
        else contaI++;
    } std::cout << "Hay " << contaP << " pares y " << contaI << " impares" << std::endl;
    
    int arr4[] = {1,2,3,4,5,6};
    for (int i = (sizeof(arr4) / sizeof(arr4[0])) - 1; i >= 0; i--) {
        std::cout << arr4[i] << '\t';
    } std::cout << std::endl;
    
    int arr5[10] = {};
    int conta = 0;
    for (int i = 0; i < (sizeof(arr5) / sizeof(arr5[0])) ; i++) {
        std::cout << "Ingrese " << (i+1) << ": ";
        std::cin >> arr5[i]; 
    } 
    for (int i = 0; i < (sizeof(arr5) / sizeof(arr5[0])); i++) {
        if(arr5[i] == 2) conta++;
    } std::cout << "Hay " << conta << " veces el numero 2" << std::endl;
    return 0;
}