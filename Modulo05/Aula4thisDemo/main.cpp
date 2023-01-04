//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  5
// Lesson:  4
// Date:    2022-12-28
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----  Library
#include "HipoCalc.hpp"

//========================================
//----  Main Function
int main()
{
    HipoCalc triangle1, triangle2(6.0,8.0);
    triangle1.rectangularTriangle();
    triangle2.rectangularTriangle();
    return 0;
}
