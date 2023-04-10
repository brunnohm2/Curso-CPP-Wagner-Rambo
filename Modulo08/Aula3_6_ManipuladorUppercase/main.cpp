//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  8
// Lesson:  3 Manipulador Uppercase
// Date:    2023-04-10
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----## MANIPULADOR uppercase

// Utilize **uppercase** para apresentar o ‘X’ e demais letras em maiúsculo nas notações hexadecimais
// e o ‘E’ maiúsculo nas notações científicas.
// O manipulador **nouppercase** retorna para as notações ‘x’, ‘e’ minúsculos.

#include <iostream>
using std::cout;
using std::endl;
using std::fixed;
using std::scientific;
using std::uppercase;
using std::hex;
using std::showbase;

int main()
{
  cout<< uppercase;
  cout<< scientific << 0.001 << endl;
  cout<< hex << showbase << 10 << endl;

  return 0;
}
