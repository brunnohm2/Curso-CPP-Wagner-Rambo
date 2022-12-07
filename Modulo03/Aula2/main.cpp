//
// Curso: C++, Curso Completo
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai
// Modulo: 3
// Aula: 2 Sobrecarga de Funcoes
// Data: 2022-12-06
// IDE Code::Blocks
// Arquivo main.cpp
//

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//============================
//Prototipo de funcoes
int soma(int a, int b);

int soma(short a, short b, short c);
void soma(int a, int b, int &resul);

template<typename BHM, typename BHM2>
BHM minimo(BHM value1, BHM value2, BHM2 value3);
//============================
//Funcao principal
int main(){

    int resultado=0;
    cout<<resultado<<endl;
    soma(5,10, resultado);
    cout<<resultado<<endl;

    cout<<soma(5,1)<<endl;
    cout<<soma(5,5,5)<<endl;

    cout<<minimo(7,6,4)<<endl;
}

//============================
//Funcoes
int soma(int a, int b){
    return a+b;
}
int soma(short a, short b, short c){
    return a+b+c;
}
void soma(int a, int b, int &resul){
    resul=a+b;
}
template<typename BHM, typename BHM2>
BHM minimo(BHM value1, BHM value2, BHM2 value3){
    BHM menor=value1;

    if(value2<menor) menor=value2;
    if(value3<menor) menor=value3;

    return menor;
}
