//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  8
// Lesson:  3 Manipulador boolalpha
// Date:    2023-04-10
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----  ## MANIPULADOR boolalpha

//- **boolalpha** é utilizado quando queremos gerar as saídas **true** ou false ao invés de 1 ou 0.
// Caso você desejar voltar ao formato padrão, utilize **noboolalpha**.

#include <iostream>
using std::boolalpha;
using std::noboolalpha;
using std::cout;
using std::endl;

int main()
{
  cout<< boolalpha;
  cout<< (3<8) << endl;
  cout<< (3>8) << endl;
  cout<< noboolalpha;
  cout<< (3<8) << endl;
  cout<< (3>8) << endl;
  return 0;
}
