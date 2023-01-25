//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  6
// Lesson:  3 Construtores e Destruidores em Classes Derivadas
// Date:    2023-01-05
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
    Rg dados_pessoaisA("Joao", "Barroso", 1986, 1, 18, 8888888, 6);
    Rg dados_pessoaisB("Maria Joana", "da Silva", 1986, 1, 18, 8888888, 6);

    cout<<"=============================================="<<endl;
    dados_pessoaisA.getPersonalData();
    dados_pessoaisA.setFirstName("Carlos");
    dados_pessoaisA.setRGSuffix(9);
    dados_pessoaisA.setBirthYear(2000);
    dados_pessoaisA.setBirthMonth(12);
    dados_pessoaisA.setBirthDay(5);
    dados_pessoaisA.setRGNumber(4444444);
    dados_pessoaisA.getPersonalData();
    cout<<"=============================================="<<endl;
    dados_pessoaisB.getFullName();
    cout<<dados_pessoaisB.getFirstName()<<' '<<dados_pessoaisB.getLastName()<<endl;
    cout<<"Rg: "<<dados_pessoaisB.getRGNumber()<<'-'<<dados_pessoaisB.getRGSuffix()<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"Dados Completo"<<endl;
    dados_pessoaisB.getPersonalData();
    cout<<"=============================================="<<endl;
    return 0;
}
