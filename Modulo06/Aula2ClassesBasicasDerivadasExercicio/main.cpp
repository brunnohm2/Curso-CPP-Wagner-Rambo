//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  6
// Lesson:  2 Classes Básicas e Derivadas Exercício Livre
// Date:    2023-01-04
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----  Library
#include "Rg.hpp"

//========================================
//----  Main Function
int main()
{
    Rg dados_pessoais("Brunno Hiroshy", "Murai", 1986, 1, 18, 8888888, 6);
    dados_pessoais.getPersonalData();
    dados_pessoais.setFirstName("Carlos");
    dados_pessoais.setRGSuffix(9);
    dados_pessoais.setRGNumber(4444444);
    dados_pessoais.getPersonalData();
    return 0;
}
