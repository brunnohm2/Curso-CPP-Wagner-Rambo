//
// Curso: C++, Curso Completo
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai
// Modulo: 2
// Aula: 3
// Data: 2022-12-03
// IDE Code::Blocks
// Arquivo JurosCompostos.cpp que contem as implementacoes da funcao-membro

#include "JurosCompostos.hpp"
//=========================================================
//--------Desenvolvimento das Funcoes-membro--------
JurosCompostos::JurosCompostos(string title){
    getTitle=title;
}

void JurosCompostos::welcome(){
    cout<<"Bem-vindo ao "<<getTitle<<endl;
}

void JurosCompostos::calcJurosCompostos(){
    double  a; // Montante
    double  p; // Aporte
    double  r; // Juros a. a.
    int     n; // Numero de anos

    cout<<"Inserir o valor do aporte: ";
    cin>>p;

    cout<<"\nInserir numero de anos: ";
    cin>>n;

    cout<<"\nInserir taxa de juros ao ano %: ";
    cin>>r;

    cout<<"Ano"<<setw(20)<<"Valor do deposito"<<endl;   // Cabecalho da tabela

    cout<<fixed<<setprecision(2);                       // Configura a precisao do numero
    for(int ano=1;ano<=n;ano++){
        a=p*pow(1.0+r/100,ano);
        cout<<setw(3)<<ano<<setw(20)<<a<<endl;
    }
}
