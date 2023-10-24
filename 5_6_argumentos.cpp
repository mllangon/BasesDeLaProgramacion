#include<iostream>
#include<cstdarg>

double promedio (int num, ...){
    va_list args;
    va_start(args,num);
    double sum = 0;

    for (int i = 0; i < num ; ++i){
        sum += va_arg(args,int);
    }
    va_end(args);
    return sum/num;

}
int main(){
    double resultado = promedio( 11,22,33,44,55,66,77,88,99,111,222);
    std::cout<<"El promedio es: "<<resultado<<"\n";
    return 0;
}