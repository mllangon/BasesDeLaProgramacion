#include <iostream>

int variableglobal=10;

void mifuncion(){
    int variablelocal=5;
    std::cout << "Variable local: " << variablelocal << std::endl;

}

int main(){
    std::cout << "Variable global: " << variableglobal  << std::endl;
    if (true){
        int variablebloque=20;
        std::cout << "Variable dentro del bloque: " <<variablebloque << std::endl;

    }
    for (int i=0; i<5; i++){
        int variablebucle=i;
        std::cout << "Variable bucle: " <<variablebucle << std::endl;
    }
    mifuncion();

    return 0;
}