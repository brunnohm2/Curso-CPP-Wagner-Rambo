//==================================
//---- Library
#include <iostream>         // Biblioteca padrao de entrada e saida de dados
using std::endl;            // Linha nova
using std::cout;            // Imprime dados
using std::cin;             // Obtem dados inseridos na tela

#include <cmath>            // Biblioteca Funcoes gerais para calculos matematicos
using std::pow;             // Calcula a potencia de um numero Ex.: pow(3, 4) 3 elevado a 4
using std::sqrt;            // Calcula a raiz quadrada         Ex.: sqrt(4) calcula raiz quadrada de 4

//========================================
//---- Class Development
#ifndef HIPOCALC
#define HIPOCALC
class HipoCalc
{
    public:
        HipoCalc(double=3.0, double=4.0);
        ~HipoCalc();
        void rectangularTriangle() const;
    private:
        double pythagoras (double, double);
        double hypotenuse;
        double _legA;
        double _legB;
};
#endif

