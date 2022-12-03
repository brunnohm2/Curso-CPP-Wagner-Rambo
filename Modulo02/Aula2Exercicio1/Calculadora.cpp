//
// Curso: C++, Curso Completo
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai
// Modulo: 2
// Aula: 2
// Data: 2022-12-02
// IDE Code::Blocks
// Arquivo Calculadora.cpp que contem as implementacoes da funcao-membro

//=========================================================
//--------Desenvolvimento das Funcoes-membro--------
#include "Calculadora.hpp"

Calculadora::Calculadora(string titulo){
    tituloCalculadora = titulo;
    cout<<"Bem-vindo a "<<tituloCalculadora<<endl;

} //End Calculadora

void Calculadora::operador_de_calculos(){
    int soma1;
    int soma2;
    int diferenca1;
    int diferenca2;
    int produto1;
    int produto2;

    cout<<"Insira o numero 1: ";
    cin>>soma1;
    cout<<"Insira o numero 2: ";
    cin>>soma2;

    cout<<"\nInsira o numero 3: ";
    cin>>diferenca1;
    cout<<"Insira o numero 4: ";
    cin>>diferenca2;

    cout<<"\nInsira o numero 5: ";
    cin>>produto1;
    cout<<"Insira o numero 6: ";
    cin>>produto2;

    cout<<"\n===Calculos==="<<endl;
    cout<<soma1<<"+"<<soma2<<"="<<soma1+soma2<<endl;
    cout<<diferenca1<<"-"<<diferenca2<<"="<<diferenca1-diferenca2<<endl;
    cout<<produto1<<"*"<<produto2<<"="<<produto1*produto2<<endl;
    cout<<"===Fim==="<<endl;
} // End operador_de_calculos
