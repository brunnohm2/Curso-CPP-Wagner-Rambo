//
// Curso: C++, Curso Completo
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai
// Modulo: 3
// Aula: 3 INTRODUÇÃO À RECURSÃO Exercicio
// Data: 2022-12-06
// IDE Code::Blocks
// Arquivo main.cpp
//
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include<iomanip>
using std::setw;         // Permite configurar a largura de um campo

//============================
//Prototipo de funcoes
void tabuada(int);

//============================
//Main
int main(){
    int valor=0;
    char pergunta;
    do{
        cout<<"==================================="<<endl;
        cout<<"Calcular a tabuada de qual numero: ";
        cin>>valor;
        cout<<"==================================="<<endl;

        tabuada(valor);

        cout<<"==================================="<<endl;
        cout<<"Digite s para calcular outro numero"<<endl;
        cin>>pergunta;
    }while(pergunta=='s');
}
//============================
//Funcoes
void tabuada(int valor){
    static int multiplicador=1;
    int resultado;

    resultado=valor*multiplicador;
    cout<<setw(2)<<multiplicador<<setw(2)<<"+"<<setw(2)<<valor<<setw(2)<<"="<<setw(3)<<resultado<<endl;

    multiplicador++;

    if(multiplicador<=10) tabuada(valor);
    else{
        multiplicador=1;
        return;
    }
}
