//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  8
// Lesson:  3 Manipuladores de Espacamento Interno e Sinal
// Date:    2023-04-10
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----## MANIPULADOR DE ESPAÇAMENTO INTERNO E SINAL
//- Com internal você cria um espaçamento interno (conforme setw) e utilizando showpos o sinal de + ou de - é apresentado.
//- Para remover essa formatação, utilize noshowpos.

#include <iostream>
using std::internal;
using std::showpos;
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
  cout<<internal<<showpos<<setw(8)<<-6<<endl;
  cout<<internal<<showpos<<setw(8)<<12<<endl;
  return 0;
}
