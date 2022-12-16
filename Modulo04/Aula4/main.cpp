//
// Curso: C++, Curso Completo
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai
// Modulo: 4
// Aula: 4 Exercicio Resolvido
// Data: 2022-12-15
// IDE Code::Blocks
// Arquivo main.cpp
//

//==================================
// Bibliotecas
#include <iostream>         // Biblioteca padrao de entrada e saida de dados
using std::endl;            // Linha nova
using std::cout;            // Saida de dados
using std::cin;             // Entrada de dados

//==================================
// Prototipo de Funcoes
int soma (int, int, char &);
int sbt (int, int, char &);
int mult (int, int, char &);
void calc(int(*oper)(int,int, char &), int a, int b);
//==================================
// Funcao principal
int main()
{
    calc(soma,5,8);
    calc(mult,5,2);
    calc(sbt, 10,7);
    return 0;
}

//==================================
// Desenvolvimento das Funcoes
int soma (int a, int b, char &sym){
    sym = '+';
    return a+b;
}
int sbt (int a, int b, char &sym){
    sym = '-';
    return a-b;
}
int mult (int a, int b, char &sym){
    sym = '*';
    return a*b;
}
void calc(int(*oper)(int,int, char &), int a, int b){
    char sym = '.';
    int res = (*oper)(a, b, sym);
    cout << a << sym << b << "=" << res << endl;
}
