//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  6
// Lesson:  4 Exercicio Exemplos de Polimorfismo
// Date:    2023-01-05
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----  Library
#include "DadosPessoais.hpp"
#include "Rg.hpp"

//========================================
//----  Main Function
int main()
{
    //Ponteiro de classe basica para objeto de classe basica
    DadosPessoais  dadosComum("Rafaela", "Barbosa", 1986, 2, 5);
    DadosPessoais *dadosComumPtr = &dadosComum;
    dadosComumPtr->dispPersonalData();
    cout<<"=============================================="<<endl;

    //Ponteiro de classe derivada para objeto de classe derivada
    Rg dadosRG("Joao", "Barroso", 1986, 1, 18, 8888888, 6);
    Rg *dadosRGPtr = &dadosRG;
    dadosRGPtr->dispPersonalData();
    cout<<"=============================================="<<endl;

    //Ponteiro de classe basica para objeto de classe derivada
    dadosComumPtr = &dadosRG;
    dadosComumPtr->dispPersonalData();
    cout<<"=============================================="<<endl;


    return 0;
}
