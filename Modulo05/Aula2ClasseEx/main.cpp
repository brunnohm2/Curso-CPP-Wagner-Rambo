//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  5
// Lesson:  2 ClasseEx
// Date:    2022-12-19
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----  Includes
#include "ClasseEx.hpp"

//========================================
//----  Main Class
int main(){
    ClasseEX    obj1(15,16,17);
    ClasseEX    obj2;

    obj1.printThis();
    obj2.printThis();

    obj2 = obj1;

    obj2.printThis();
    return 0;
}
