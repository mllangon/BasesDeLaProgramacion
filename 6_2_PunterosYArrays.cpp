#include <iostream>

int main() {
    const int tamano = 5;
    int numeros[tamano] = {1, 2, 3, 4, 5};

    int* puntero = numeros;

    std::cout << "Cotenido original del array: " << std::endl;
    for (int i = 0; i < tamano; ++i) {
        std::cout << *(puntero + i) << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < tamano; ++i) {
        *(puntero + i) *= 2;
    }

    std::cout << "Contenido modificado del array: " << std::endl;
    for (int i = 0; i < tamano; ++i) {
        std::cout << *(puntero + i) << " ";
    }
    std::cout << std::endl;

    return 0;
}
