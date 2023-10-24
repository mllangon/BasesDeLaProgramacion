//Programa C++ que solicite al usuario un numero y luego imprima
//la tabla de multiplicar de ese numero utilizando un bucle while
#include <iostream>
int main(){
    std::cout <<"Registre un numero por favor: ";
    int numero;
    std::cin >> numero;
    int contador = 1;
    while (contador <=10) {
        std::cout << " x " << contador << " = " << (numero * contador) << std::endl;
        contador++;

    }

    return 0;
}