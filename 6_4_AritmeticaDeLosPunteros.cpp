#include <iostream>

int main () {
    int numeros[] = {1, 2, 3, 4, 5};
    int* puntero = numeros;

    std::cout << "Elementos del arreglo usando la aritmetica de punteros: " << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Elemento " << i + 1 << ": " << *(puntero + i) << std::endl;

    }
    int offset = 2;
    std::cout << "\nDemostracion de la aritmetica de punteros: " << std::endl;
    std::cout << "Elemento actual: " <<puntero << std::endl;

    puntero = puntero + offset;
    std::cout << "Despues de continuar " << offset << " elementos: " << *puntero << std::endl;
    puntero = puntero - offset;
    std::cout << "Despues de retroceder " << offset << " elementos: " << *puntero << std::endl;

    return 0;
}