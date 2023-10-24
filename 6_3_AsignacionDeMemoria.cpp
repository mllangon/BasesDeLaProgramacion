#include <iostream>

int main() {

    std::cout << "Ingrese el tamano del array: ";
    int tamano;
    std::cin >> tamano;

    int* array = new int [tamano];

    std::cout << "Ingrese " << tamano << " valores para el arreglo: " << std::endl;
    for (int i = 0; i < tamano; ++i) {
        std::cin >> array [i];
}

std::cout << "Valores introducidos en el array: " << std::endl;
for (int i = 0; i < tamano; ++i) {
    std::cout << array[i] << " ";
}
std::cout << std::endl;
delete[] array;

return 0;

}