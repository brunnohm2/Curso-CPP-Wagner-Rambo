//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  7
// Lesson:  3 Sobrecarga de Operadores =
// Date:
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----  Library
#include "Config.hpp"

//========================================
//----  Main Function
int main()
{
    Config valorAtual(4);
    valorAtual.printVal();

    cout<<"========================="<<endl;

    valorAtual = 15;
    valorAtual.printVal();

    cout<<"========================="<<endl;

    valorAtual = 16;
    valorAtual.printVal();

    cout<<"========================="<<endl;

    valorAtual = 42;
    valorAtual.printVal();

    return 0;
}
