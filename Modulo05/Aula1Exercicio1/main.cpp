//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  4
// Lesson:  1 Exercise
// Date:    2022-12-18
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----  Includes
#include "Bhaskara.hpp"

//========================================
//----  Main Function
int main(){
    Bhaskara calc1( 1, -4,  3);
    Bhaskara calc2(-2, -5, -2);
    Bhaskara calc3( 4, -8, 12);

    calc1.viewValues();
    calc2.viewValues();
    calc3.viewValues();

    return 0;
}
