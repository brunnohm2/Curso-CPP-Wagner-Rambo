
//========================================
//---- Class Development
#ifndef CONFIG
#define CONFIG

//==================================
//---- Library
#include <iostream>         // Biblioteca padrao de entrada e saida de dados
using std::endl;            // Linha nova
using std::cout;            // Imprime dados
using std::cin;             // Obtem dados inseridos na tela
class Config
{
    public:
        Config(int val = 0);
        void operator= (int newVal);

        int     getVal()    const;
        void    printVal()  const;
    private:
        int _val;
};
#endif

