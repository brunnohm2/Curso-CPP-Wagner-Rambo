//==================================
//---- Library
#include <iostream>         // Biblioteca padrao de entrada e saida de dados
using std::endl;            // Linha nova
using std::cout;            // Imprime dados
using std::cin;             // Obtem dados inseridos na tela

//========================================
//---- Class Development
#ifndef FRIENDSDEMO
#define FRIENDSDEMO
class FriendsDemo{
    friend void calcFreq(FriendsDemo &, double, double, double);

    public:
        FriendsDemo();
        ~FriendsDemo();
        void result();

    private:
        double f;
};
#endif

