//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  7
// Lesson:  3 Exercicio
// Date:    2023-01-08
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----  Library
#include "ProdEscalar.hpp"

//========================================
//----  Main Function
int main()
{
  ProdEscalar p1(9,7,4), p2;
  int k = 10;

  p2 = p1*k;
  p2.printResult();
  while(1);
  return 0;
}
