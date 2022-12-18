//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  5
// Lesson:  1
// Date:    2022-12-18
// IDE:     Code::Blocks
// File:    PrintVal.hpp
//

//========================================
//---- Class Development
#ifndef PRINTVAL
#define PRINTVAL

//========================================
//----  Library
#include <iostream>
using std::cout;
using std::endl;
class PrintVal
{
  public:
    PrintVal();
    void setValue(int val);
    void printThis();

  private:
    int valToPrint;

}; //end class PrintVal
#endif
