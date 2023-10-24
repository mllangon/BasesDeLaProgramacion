#include <iostream>
 int suma(int a, int b) {
     return a + b;
 }
 int main() {
    int resultado (suma (5,7));
    std::cout<< "El resultado de la suma es: " << resultado << "\n";
    return 0;
}