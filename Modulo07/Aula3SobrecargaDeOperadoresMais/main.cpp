//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  7
// Lesson:  3 Sobrecarga de Operadores +
// Date:    2023-01-08
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----  Library
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Vet3d.hpp"

//========================================
//----  Main Function
int main()
{
    Vet3d   P1(1,2,3),
            P2(4,5,6),
            P3;
    P3 = P1 + P2;
    cout    << "P3("
            << P3.getX() << ','
            << P3.getY() << ','
            << P3.getZ() << ")\n";
    return 0;
}
