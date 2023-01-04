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

//========================================
//---- Class Development
#ifndef SENSCURRENT
#define SENSCURRENT
class sensCurrent
{
    public:
        sensCurrent(const string &sensType, int valorADC, unsigned sensID, double Vref, double Res);
        ~sensCurrent();

        void        setSensType (const string &sensType);
        string      getSensType ()                      const;
        void        setValorADC (int valorADC);
        int         getValorADC ()                      const;
        void        setSensID   (unsigned sensID);
        unsigned    getSensID   ()                      const;
        void        setVref     (double Vref);
        double      getVref     ()                      const;
        void        setRes      (double Res);
        double      getRes      ()                      const;

        double      currentVal  ()                      const;
        void        dispResults ()                      const;
    private:
        string      _sensType;
        int         _valorADC;
        unsigned    _sensID;
        double      _Vref;
        double      _Res;
};
#endif

