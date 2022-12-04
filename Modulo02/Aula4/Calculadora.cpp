//
// Curso: C++, Curso Completo
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai
// Modulo: 2
// Aula: 4
// Data: 2022-12-04
// IDE Code::Blocks
// Arquivo Calculadora.cpp que contem as implementacoes da funcao-membro

//=========================================================
//--------Desenvolvimento das Funcoes-membro--------
#include "Calculadora.hpp"
Calculadora::Calculadora(string title){
    getTitle(title);
    cout<<calculadoraTitle<<endl;
}
void Calculadora::getTitle(string title){
    calculadoraTitle=title;
}
void Calculadora::operacoes(){
    char sair;
    do{
        cout<<"Digite o operador A: ";
        cin>>operadorA;

        cout<<"Digite o operador B: ";
        cin>>operadorB;
        cout<<endl;

        cout<<"Escolha a opcao desejada:"<<endl;
        cout<<"+ : Somar               (operando A + operando B)"<<endl;
        cout<<"- : Subtrair            (operando A - operando B)"<<endl;
        cout<<"* : Multiplicar         (operando A * operando B)"<<endl;
        cout<<"/ : Dividir             (operando A / operando B)"<<endl;
        cout<<"p : Potenciacao         (operando A elevado a operando B)"<<endl;

        char opcao;
        cout<<"Digite a opcao: ";
        cin>>opcao;
        switch(opcao){
            case '+':
                somar();
            break;


            case '-':
                subtrair();
            break;


            case '*':
                multiplicar();
            break;


            case '/':
                dividir();
            break;


            case 'p':
                potencializar();
            break;

            default:
                cout<<"fim"<<endl;

        } // End switch
        cout<<"Digite s para sair: ";
        cin>>sair;
    }while(sair!='s'); // End do
} // End operacoes
void Calculadora::somar(){
    cout<<operadorA<<"+"<<operadorB<<" = "<<operadorA+operadorB<<endl;
}
void Calculadora::subtrair(){
    cout<<operadorA<<"-"<<operadorB<<" = "<<operadorA-operadorB<<endl;
}
void Calculadora::multiplicar(){
    cout<<operadorA<<"*"<<operadorB<<" = "<<operadorA*operadorB<<endl;
}
void Calculadora::dividir(){
    cout<<operadorA<<"/"<<operadorB<<" = "<<setprecision(2)<<fixed<<static_cast<double>(operadorA/operadorB)<<endl;
}
void Calculadora::potencializar(){
     cout<<"Potencializacao de "<<operadorA<<" elevado a "<<operadorB<<" = "<<pow(operadorA,operadorB)<<endl;
}
