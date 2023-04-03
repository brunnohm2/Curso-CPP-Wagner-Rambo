//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  7
// Lesson:  4 OBJETOS string
// Date:    2023-01-12
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----  Library
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "String.hpp"

//========================================
//----  Main Function
int main()
{
  String  s1("Ola ");
  String  s2("Curso C++");
  String  s3(" WR Kits");
  String  s4;


  s4 = s1 += s2 += s3;

  cout << s4 << endl;

  return 0;
}
