#include <iostream>

int main() {
    int numero = 29;
    double decimal = 3.141596;
    char caracter = 'A';
    int* punteroNumero;
    double* punteroDecimal;
    char* punteroCaracter;

    punteroNumero = &numero;
    punteroDecimal = &decimal;
    punteroCaracter = &caracter;

    std::cout<< "Valor del numero: " << *punteroNumero << std::endl;
    std::cout<< "Valor del decimal: " << *punteroDecimal << std::endl;
    std::cout<< "Valor del caracter: " <<*punteroCaracter << std::endl;

    *punteroNumero = 50;
    *punteroDecimal = 2.718;
    *punteroCaracter = 'Z';

    std::cout << "Nuevo valor del numero: " << numero << std::endl;
    std::cout << "Nuevo valor del decimal: " << decimal << std::endl;
    std::cout << "Nuevo valor del caracter: " << caracter << std::endl;

    return 0;
}

