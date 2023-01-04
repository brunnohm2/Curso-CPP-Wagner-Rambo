//==================================
//---- Library
#include <cmath>            // Biblioteca Funcoes gerais para calculos matematicos
using std::sin;             // Calcula o seno

//========================================
//---- Class Development
#ifndef EXEMPLO1
#define EXEMPLO1
class Exemplo1{
    friend class Exemplo2;
    public:
        Exemplo1();
        ~Exemplo1();

    private:
        double x1;
};
#endif

