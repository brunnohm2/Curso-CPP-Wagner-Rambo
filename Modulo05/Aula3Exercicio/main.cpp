//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  5
// Lesson:  3
// Date:    2022-12-27
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----  Library
#include "CalcP.hpp"

//========================================
//----  Main Function
int main()
{
    CalcP PowerSupply;
    potVal(PowerSupply, 12,4);
    PowerSupply.printP();
    return 0;
}
