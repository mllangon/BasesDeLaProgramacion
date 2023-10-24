#include <iostream>

int funcion(int a) {
    return a * 6;
}

int procedimiento() {
    std::cout << "Aqui el procedimiento";
return 0;
}

int main() {
    int resultado = funcion(2);
    std::cout << "La funcion da como resultado: " << resultado << "\n";
    procedimiento();
    return 0;
}