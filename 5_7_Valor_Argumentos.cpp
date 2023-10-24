#include <iostream>

int exponencial (int base, int exponente=2) {
    int resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}
int resultado1 = exponencial(2);
int resultado2 = exponencial(2^4);

int main() {

    std::cout << "El resultado de 2^2 es: " << resultado1 << "\n";
    std::cout << "El resultado de 2^4 es: " << resultado2 << "\n";

    return 0;
}