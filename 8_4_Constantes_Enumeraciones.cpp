#include<iostream>

enum Meses {Enero,Febrero,Marzo,Abril,Mayo,Junio,Julio,Agosto,Septiembre,Octubre,Noviembre,Diciembre};

int main(){
    Meses mes = Octubre;
    int numerodemeses = 1+mes;
    const int diasporsemana = 7;


    std::cout<<"Numero del mes: "<<numerodemeses<<std::endl;
    std::cout<<"Dias por semana: "<<diasporsemana<<std::endl;
    return 0;
}