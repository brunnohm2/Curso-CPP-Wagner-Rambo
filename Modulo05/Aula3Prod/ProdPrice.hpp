//==================================
//---- Library
#include <iostream>         // Biblioteca padrao de entrada e saida de dados
using std::endl;            // Linha nova
using std::cout;            // Imprime dados
using std::cin;             // Obtem dados inseridos na tela

//========================================
//---- Class Development
#ifndef PRODPRICE
#define PRODPRICE
class ProdPrice{
    public:
        ProdPrice(int=0);
        int printPrice() const;
        ~ProdPrice();

    private:
        int price1;
};
#endif

