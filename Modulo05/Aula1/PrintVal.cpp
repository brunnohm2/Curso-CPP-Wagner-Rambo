//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  5
// Lesson:  1
// Date:    2022-12-18
// IDE:     Code::Blocks
// File:    PrintVall.cpp
//

//========================================
//---- Class Development (Member-Function)
#include "PrintVal.hpp"
//
//  PrintVal.cpp
//  Dr. Eng. Wagner Rambo, agosto de 2022
//


#include "PrintVal.hpp"

PrintVal::PrintVal()
{
  valToPrint = 0;     //valor padrão ao iniciar

}

void PrintVal::setValue(int val)
{
  valToPrint = val;

} //end setValue


void PrintVal::printThis()
{
  cout << "Valor recebido: " << valToPrint << endl;

} //end printThis
