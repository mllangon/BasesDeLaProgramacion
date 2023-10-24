#include <iostream>

int suma (int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

typedef int (*FuncionOperacion)(int, int);

int main() {
    FuncionOperacion punteroSuma = suma;
    FuncionOperacion punteroResta = resta;

    int resultadoSuma = punteroSuma(7,5);
    int resultadoResta = punteroResta(7,5);

    std::cout << "Resultado de la suma: " << resultadoSuma << std::endl;
    std::cout << "Resultado de la resta: " << resultadoResta << std::endl;

    return 0
}