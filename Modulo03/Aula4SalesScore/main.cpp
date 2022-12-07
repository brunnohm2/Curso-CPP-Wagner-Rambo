//
// Curso: C++, Curso Completo
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai
// Modulo: 3
// Aula: 4
// Data: 2022-12-07
// IDE Code::Blocks
// Arquivo main.cpp
//

#include "SalesScore.hpp"
//=========================================================
//--------Funcao Principal--------
int main()
{

    int salesArray [SalesScore::products]={301,300,144,140,120,571,650,750,101,156};
    SalesScore mySales("Mercadinho", salesArray);


    mySales.bootSystem();
    //mySales.enterProducts();
    //mySales.productsReport();
    cout<<"============================================================"<<endl;
    mySales.processSales();

    return 0;
} // End da classe main
