#include<iostream>
#include<cmath>
#define PI 3.14159265
double areacirculo (int radio){
    return PI * radio * radio;
}
int main (){
    int radio = 8;
    double area= areacirculo(radio);
    std::cout << "El area del circulo es: " <<area<<std::endl;

}