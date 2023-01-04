//==================================
//---- Library
#include <iostream>         // Biblioteca padrao de entrada e saida de dados
using std::endl;            // Linha nova
using std::cout;            // Imprime dados
using std::cin;             // Obtem dados inseridos na tela

#include <iomanip>          // Biblioteca Manipuladores de fluxo parametrizados
using std::setw;            // Permite configurar a largura de um campo Ex.: setw(5)

//========================================
//---- Class Development
#ifndef ADJUSTS
#define ADJUSTS
class Adjusts
{
    public:
        Adjusts(int=50, int=50, int=50);
        ~Adjusts();
        Adjusts &setAdjust(int, int, int);
        Adjusts &setVolume(int);
        Adjusts &setBrightness(int);
        Adjusts &setContrast(int);
        void displayParameter() const;
    private:
        int _volume;
        int _brightness;
        int _contrast;
};
#endif

