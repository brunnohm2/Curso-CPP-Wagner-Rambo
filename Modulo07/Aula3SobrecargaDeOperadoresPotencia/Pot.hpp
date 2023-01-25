
//========================================
//---- Class Development
#ifndef POT
#define POT

//==================================
//---- Library
#include <iostream>         // Biblioteca padrao de entrada e saida de dados
using std::endl;            // Linha nova
using std::cout;            // Imprime dados
using std::cin;             // Obtem dados inseridos na tela

#include <cmath>            // Biblioteca Funcoes gerais para calculos matematicos
using std::pow;             // Calcula a potencia de um numero Ex.: pow(3, 4) 3 elevado a 4

class Pot
{
    public:
        Pot(int base = 1);
        int operator^(int val);

        void setBase(int base = 1);

    private:
        int _base;

};
#endif

