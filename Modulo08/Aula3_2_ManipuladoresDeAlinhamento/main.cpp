//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  8
// Lesson:  3 Manipuladores de Alinhamento
// Date:    2023-04-10
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//---- ## MANIPULADORES DE ALINHAMENTO
//- Utilize **right** e **left** para alinhar os campos à direita ou à esquerda.
//- Por padrão, o alinhamento é sempre à direita.Veja o trecho a seguir.

#include <iostream>
using std::left;
using std::right;
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
  cout << right << setw(4) << 1 << endl;
	cout << left << setw(4) << 1 << endl;
	return 0;
}
