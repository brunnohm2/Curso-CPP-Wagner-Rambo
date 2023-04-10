//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  8
// Lesson:  3 Manipulador de Notacao Cientifica
// Date:    2023-04-10
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----## MANIPULADOR DE NOTAÇÃO CIENTÍFICA
//
//- Os manipuladores **fixed** e **scientific** controlam o formato de saída de números em ponto flutuante.
//- Para exibir em notação científica, você deve utilizar **scientific**.
//- O manipulador **fixed** força a exibição de um número específico de dígitos.

#include <iostream>
using std::cout;
using std::endl;
using std::fixed;
using std::scientific;

#include <iomanip>
using std::setprecision;
int main()
{
  cout<<0.001<<endl;
  cout<<scientific<<0.001<<endl;
  cout<<fixed<<setprecision(3);
  cout<<0.001<<endl;


  return 0;
}
