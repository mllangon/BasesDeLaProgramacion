#include <iostream>

int variableglobal=10;

void funciongLocalGlobal(){
    int variablelocal;
    variablelocal=5;
    std::cout << "Variable local en la funcion: " <<variableglobal << std::endl;
    std::cout << "Variable local en la funcion: " <<variableglobal << std::endl;
}

int main(){
    std::cout << "Variable local en la funcion: " <<variableglobal << std::endl;
    int variableLocalMain=20;
    std::cout << "Variable local en main: " << variableLocalMain << std::endl;

    return 0;
}