//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  5
// Lesson:  5 Membros da Classe Static
// Date:    2022-12-29
// IDE:     Code::Blocks
// File:    main.cpp
//
//========================================
//----  Library
#include "Components.hpp"

//========================================
//----  Prototype Function
void printMessage(string message);


//========================================
//----  Main Function
int main()
{
    printMessage("Antes dos objetos serem criados Contador de Componentes = ");
    cout<<Components::getComponentCount()<<endl;

    Components *component1 = new Components("TBJ", "TIP42");
    Components *component2 = new Components("MOSFET", "IRF3205");
    Components *component3 = new Components("Integrated Circuit", "SG3525A");

    printMessage("Depois dos objetos serem criados Contador de Componentes = ");
    cout<<Components::getComponentCount()<<endl;

    printMessage("Componente 1: ");
    cout<<component1->getTypeComponent()<<' '<<component1->getModelComponent()<<endl;

    printMessage("Componente 2: ");
    cout<<component2->getTypeComponent()<<' '<<component2->getModelComponent()<<endl;

    printMessage("Componente 3: ");
    cout<<component3->getTypeComponent()<<' '<<component3->getModelComponent()<<endl;

    delete component1;
    component1 = 0; // desconecta o ponteiro do espaco de armazenamento livre
    delete component2;
    component2 = 0; // desconecta o ponteiro do espaco de armazenamento livre
    delete component3;
    component3 = 0; // desconecta o ponteiro do espaco de armazenamento livre

    printMessage("Depois dos objetos serem deletados Contador de Componentes = ");
    cout<<Components::getComponentCount()<<endl;
    return 0;
}
//========================================
//----  Function Development
void printMessage(string message)
{
    cout<<message;
}
