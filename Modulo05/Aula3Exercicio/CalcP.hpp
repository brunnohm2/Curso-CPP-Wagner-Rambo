//==================================
//---- Library
#include <iostream>         // Biblioteca padrao de entrada e saida de dados
using std::endl;            // Linha nova
using std::cout;            // Imprime dados
using std::cin;             // Obtem dados inseridos na tela


//========================================
//---- Class Development
#ifndef CALCP
#define CALCP
class CalcP
{
    friend void potVal(CalcP &, double, double);
    public:
        CalcP();
        ~CalcP();
        void printP();

    private:
        double potencia;
};
#endif

