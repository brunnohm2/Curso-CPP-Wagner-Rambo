//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  8
// Lesson:  3 Manipulador para Zeros Finais
// Date:    2023-04-10
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----## MANIPULADOR PARA ZEROS FINAIS
//- Para exibir os zeros à direta de acordo com o número de casas de precisão de um número em ponto flutuante, podemos usar o manipulador showpoint.
//- Se quiser reformar esse estado de formatação, utilize ***noshowpoint***.
//- O trecho a seguir ilustra essa utilização.

#include <iostream>
using std::cout;
using std::endl;
using std::showpoint;

int main()
{
  cout<< showpoint << 15.8 << endl;
}
