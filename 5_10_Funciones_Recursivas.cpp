#include <iostream>

int calculo(int n){
    if (n<=1){
        return 1;
    } else {
        return n * calculo(n-1);
    }
}
int main(){
    int n;
    std::cout << "Introduzca un numero: ";
    std::cin >> n;
    std::cout << "El factorial de "<< n << " es: "<< calculo(n) << "\n";
    return 0;
}