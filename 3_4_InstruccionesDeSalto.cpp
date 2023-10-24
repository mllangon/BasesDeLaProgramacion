#include <iostream>
int main() {
    const int limite = 100;
    int suma = 0;
    int numero;
    while (true) {
        std::cout << "Registre un numero: ";
        std::cin >> numero;
        if (suma + numero > limite) {
            std::cout << "La suma total ha superado el limite de " << limite << ". Saliendo del bucle." <<std::endl;
        }
        suma += numero;
    }
    std::cout << "La suma total es: " << suma << std::endl;

    return 0;
}