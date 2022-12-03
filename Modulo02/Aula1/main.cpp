//
// Curso: C++, Curso Completo
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai
// Modulo: 2
// Aula: 1
// Data: 2022-11-29
// IDE Code::Blocks
// Arquivo main.cpp
//

//
// Desenvolva um programa em C++ que peça para o usuário inserir uma nota de 0 a 100.
// Caso o usuário digite um valor menor que 0 ou menor que 100, imprime “Entrada Inválida”.
// Se a nota estiver entre 90 e 100, será impresso “grau A”; se estiver entre 80-89, “grau B”; entre 70-79,“grau C”; abaixo de 70:“REPROVADO!”.
//

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int num;

    cout<<"Digite o valor da nota: "<<endl;
    cin>>num;

    if(num<0){
        cout<<"[Incorreto] - Valor menor que 0 "<<endl;
    }else if(num>100){
        cout<<"[Incorreto] - Valor maior que 100 "<<endl;
    }else if(num>=90){
        cout<<"Grau A"<<endl;
    }else if(num<=89 && num>=80){
        cout<<"Grau B"<<endl;
    }else if(num>=70 && num<=79){
        cout<<"Grau C"<<endl;
    }else if(num>=0 && num<70){
        cout<<"Reprovado"<<endl;
    }

    return 0;
}
