//
// Curso: C++, Curso Completo
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai
// Modulo: 2
// Aula: 3 Exercicio 2
// Data: 2022-12-03
// IDE Code::Blocks
// Arquivo RetaXY.cpp que contem as implementacoes da funcao-membro
//

#include "RetaXY.hpp"

//=========================================================
//--------Desenvolvimento das Funcoes-membro--------
RetaXY::RetaXY(string title){
    cout<<title<<endl;
}
void RetaXY::equacao(){
    cout<<setw(10)<<"X"<<setw(10)<<"Y"<<endl;
    int y;
    for(int x=-12;x<=47;x++){
        y=(4*x)-53;
        cout<<setw(10)<<x<<setw(10)<<y<<endl;
    }
}
