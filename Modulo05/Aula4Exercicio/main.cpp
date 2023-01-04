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
#include "Area.hpp"

//========================================
//----  Main Function
int main()
{
    Area calc1;
    calc1.setCircumference(19.0).setRectangle(19.0,26.5);
    calc1.calcAreaCR();
    calc1.printValues();
    return 0;
}
