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
        Adjusts                     (int volume=50, int brightness=50,  int contrast=50);
        ~Adjusts                    ();
        Adjusts &setAdjust          (int volume,    int brightness,     int contrast);
        Adjusts &setVolume          (int volume);
        Adjusts &setBrightness      (int brightness);
        Adjusts &setContrast        (int contrast);
        void    displayParameter    () const;
    private:
        int _volume;
        int _brightness;
        int _contrast;
};
#endif

