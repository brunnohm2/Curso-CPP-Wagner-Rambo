//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  8
// Lesson:  3 Manipuladores de Preenchimento
// Date:    2023-04-10
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----## MANIPULADOR DE PREENCHIMENTO
//
//- O manipulador **setfill** pode ser utilizado para preencher espaços com um caractere específico.
//- Você também pode utilizar a função **fill** caso prefira.

#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;
using std::setfill;

int main()
{
  cout<<setfill('%')<<setw(6)<<34<<endl;

  cout.fill('#');
  cout<<setw(9)<<81<<endl;

  return 0;
}
