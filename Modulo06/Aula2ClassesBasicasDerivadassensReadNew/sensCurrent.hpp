//==================================
//---- Library
#include <iostream>         // Biblioteca padrao de entrada e saida de dados
using std::endl;            // Linha nova
using std::cout;            // Imprime dados
using std::cin;             // Obtem dados inseridos na tela
using std::fixed;           // Garante que as casas decimais depois da virgula sejam exibidas

#include <string>           // Biblioteca Classe de string no padrao C++
using std::string;          // Permite o uso de strings

#include <iomanip>          // Biblioteca Manipuladores de fluxo parametrizados
using std::setprecision;    // Precisao para saida numerica Ex.: setprecision(2)

#include "sensVolt.hpp"
//========================================
//---- Class Development
#ifndef SENSCURRENT
#define SENSCURRENT
class sensCurrent : public sensVolt // sensCurrent vai herdar sensVolt
{
    public:
        sensCurrent(const string &sensType, int valorADC, unsigned sensID, double Vref, double Res);

        void        setRes      (double Res);
        double      getRes      ()                      const;

        double      currentVal  ()                      const;
        void        dispResults ()                      const;

    private:
        double      _Res;
};
#endif

