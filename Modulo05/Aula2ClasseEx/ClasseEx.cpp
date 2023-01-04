//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  5
// Lesson:  2 ClasseEx
// Date:    2022-12-19
// IDE:     Code::Blocks
// File:    ClasseEx.cpp
//

//========================================
//---- Class Development (Member-Function)
#include "ClasseEx.hpp"
ClasseEX::ClasseEX(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}
void ClasseEX::printThis(){
    cout<< "a = "<<a;
    cout<< "     b = "<<b;
    cout<< "     c = "<<c<<endl;
}
