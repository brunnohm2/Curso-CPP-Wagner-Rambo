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
#ifndef SENSVOLT
#define SENSVOLT
class sensVolt
{
    public:
        sensVolt(const string &, int, unsigned, double);
        ~sensVolt();

        void        setSensType (const string &);
        string      getSensType ()  const;
        void        setValorADC (int);
        int         getValorADC ()  const;
        void        setSensID   (unsigned);
        unsigned    getSensID   ()  const;
        void        setVref     (double);
        double      getVref     ()  const;

        double      voltsVal    ()  const;
        void        dispResults ()  const;

    private:
        string      _sensType;
        int         _valorADC;
        unsigned    _sensID;
        double      _Vref;
};
#endif

