//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  7
// Lesson:  2 Exercicio Resolvido
// Date:    2023-01-07
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----  Library
#include "Memoria.hpp"

//========================================
//----  Main Function
int main()
{
  Memoria <uint16_t, 6> m1;
  m1.gravaDados();
  m1.imprimeDados();
  return 0;
}
