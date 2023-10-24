#include <iostream>
int main(){
    std::cout <<"Registre un numero por favor: ";
    int numero;
    std::cin >> numero;
    int contador = 1;
    do {
        std::cout << numero << " x " << contador << " = " << (numero * contador) <<std::endl;
        contador++;
    } while (contador <=10);
    return 0;
}
