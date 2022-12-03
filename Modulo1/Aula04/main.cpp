//
// Curso: C++, Curso Completo de Wagner Rambo
// Autor: Brunno Hiroshy Murai
// Modulo: 1
// Aula: 4
// Data: 2022-11-28
// IDE Code::Blocks
// Arquivo Main
#include <iostream>
using std::cout;
using std::endl;

#include <string> // Classe de string no padrao C++
using std::string;

#include "SalesScore.hpp"
//=========================================================
//--------Funcao Principal--------
int main()
{
    SalesScore myScore1("WR Kits Plus");
    SalesScore myScore2("Mercadinho da esquina");

    cout<<"Loja 1 criada com sucesso: "<<myScore1.getStoreTitle()<<endl;
    cout<<"Loja 2 criada com sucesso: "<<myScore2.getStoreTitle()<<endl;

    while(1);
    return 0;
} // End da classe main
