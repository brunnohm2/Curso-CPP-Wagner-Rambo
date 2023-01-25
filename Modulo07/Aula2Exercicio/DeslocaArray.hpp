
//========================================
//---- Class Development
#ifndef DESLOCAARRAY
#define DESLOCAARRAY

//==================================
//---- Library
#include <iostream>         // Biblioteca padrao de entrada e saida de dados
using std::endl;            // Linha nova
using std::cout;            // Imprime dados
using std::cin;             // Obtem dados inseridos na tela
template <typename myType, unsigned short varSize>
class DeslocaArray
{
    public:
        DeslocaArray();

        void    shiftArray(myType *newArray);
        void    printArray() const;

    private:
        const unsigned short _varSize = varSize;
        myType _myArray[varSize];
};
#include "DeslocaArray.cpp"
#endif
