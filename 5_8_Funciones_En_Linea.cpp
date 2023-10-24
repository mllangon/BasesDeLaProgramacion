#include <iostream>

inline int multiplicacion(int a,int b) {
    return a*b;
}

int main () {
    int resultado = multiplicacion (9,12);
    std::cout<< "El resultado de la multiplicacion en linea es: " << resultado <<"\n";
    return 0;
}