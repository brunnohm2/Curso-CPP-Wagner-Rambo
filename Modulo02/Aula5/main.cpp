//
// Curso: C++, Curso Completo
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai
// Modulo: 2
// Aula: 5
// Data: 2022-12-04
// IDE Code::Blocks
// Arquivo main.cpp
//

#include "SalesScore.hpp"
//=========================================================
//--------Funcao Principal--------
int main()
{
    SalesScore mySales("Mercadinho");

    mySales.bootSystem();
    mySales.enterProducts();
    mySales.productsReport();

    return 0;
} // End da classe main
