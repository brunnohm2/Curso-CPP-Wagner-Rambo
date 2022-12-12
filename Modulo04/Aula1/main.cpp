//
// Curso: C++, Curso Completo
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai
// Modulo: 4
// Aula: 1
// Data: 2022-12-11
// IDE Code::Blocks
// Arquivo main.cpp

// Experimente criar um código que utilize um ponteiro para double e imprima na tela o
// endereço do ponteiro, o endereço da variável para qual o ponteiro aponta e o conteúdo da variável
// através do ponteiro declarado.

#include <iostream>         // Biblioteca padrao de entrada e saida de dados
    using std::endl;        // Linha nova
    using std::cout;        // Saida de dados
    using std::cin;         // Entrada de dados

#include <cmath>            // Biblioteca Funcoes gerais para calculos matematicos

void atualizaPonteiro(double *);
int main(){
    double var=2;
    double *ponteiro;

    ponteiro = &var;

    cout<<"========================================================="<<endl;
    cout<<"Valor de var           ="<<var<<endl;
    cout<<"Endereco de var        ="<<&var<<endl;
    cout<<"Endereco de ponteiro   ="<<&ponteiro<<endl;
    cout<<"Apontamento de ponteiro="<<ponteiro<<endl;
    cout<<"Valor do apontado      ="<<*ponteiro<<endl;
    cout<<"========================================================="<<endl;
    atualizaPonteiro(&var);
    cout<<"Valor de var atualizado="<<*ponteiro<<endl;
    return 0;
}
void atualizaPonteiro(double *update){
    *update = (*update*M_PI)/(*update*M_PI);
}
