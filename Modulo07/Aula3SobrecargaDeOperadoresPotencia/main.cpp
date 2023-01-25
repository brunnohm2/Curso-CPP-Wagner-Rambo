//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  7
// Lesson:  3 Sobrecarga de Operadores ^
// Date:    2023-01-08
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----  Library
#include "Pot.hpp"

//========================================
//----  Main Function
int main()
{
    Pot base(3);
    int expoente = 2;
    int res;

    res = base^expoente;
    cout<<res<<endl;

    base.setBase(9);
    res = base^expoente;
    cout<<res<<endl;

    return 0;
}
