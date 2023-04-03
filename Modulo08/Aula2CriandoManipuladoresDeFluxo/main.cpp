//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  8
// Lesson:  2 Criando Manipuladores de Fluxo
// Date:    2023-01-30
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----  Library
#include <iostream>
using std::cout;
using std::endl;
using std::ostream;

//========================================
//----  Criando manipulador de fluxo (Prototipo)
ostream &tabulacao(ostream &parametro);

//========================================
//----  Main Function
int main()
{
    cout<< "A1" << tabulacao << "A2" << tabulacao << "A3" << endl;
    return 0;
}

//========================================
//----  Criando manipulador de fluxo (Desenvolvimento)
ostream &tabulacao(ostream &parametro)
{
    return parametro << '\t';
}
