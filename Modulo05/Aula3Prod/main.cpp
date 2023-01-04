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
#include "ProdNames.hpp"

//========================================
//----  Main Function
int main(){
    ProdPrice prod1(55);
    ProdPrice prod2(10);
    ProdNames productName1("Transistor 55", prod1);
    ProdNames productName2("Resistor", prod2);

    productName1.results();
    productName2.results();

    return 0;
}
