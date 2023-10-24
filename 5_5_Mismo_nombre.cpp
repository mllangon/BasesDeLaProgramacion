#include <iostream>
using namespace std;

void funcion(){
    cout << "Hola que tal?" << std::endl;
}
void funcion(const string&nombre){
    cout << "Hola que tal " << nombre << "?" << std::endl;
}
int main(){
    funcion();
    funcion("Francisco");
    return 0;
}