#include <iostream>

int main() {
    int numero=42;
    int &refnumero=numero;

    std::cout << "Numero original: " << numero << std::endl;
    std::cout << "Referencia: " << refnumero << std::endl;

    refnumero=100;

    std::cout << "Numero modificado a traves de la referencia: " << numero << std::endl;
    std::cout << "Referencia despues de la modificacion: " << refnumero << std::endl;

    return 0;
}
