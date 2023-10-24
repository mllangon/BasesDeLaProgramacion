#include <iostream>

int main() {
    int numero = 29;
    int* punteroNumero = &numero;
    int** punteroAPuntero = &punteroNumero;

    std::cout << "Valor del numero: " << **punteroAPuntero << std::endl;

    **punteroAPuntero = 100;

    std::cout<< "Nuevo valor del numero: " << numero << std::endl;
    return 0;
}