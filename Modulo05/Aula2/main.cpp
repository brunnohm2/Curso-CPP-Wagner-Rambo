//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  5
// Lesson:  2
// Date:    2022-12-19
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----  Library
#include "Destrutor.hpp"

//========================================
//----  Objeto Global
Destrutor objeto1(1);

//========================================
//----  Function Prototype
void func();

//========================================
//----  Main Function
int main(){
    cout<<"Inicio da funcao principal"<<endl;
    Destrutor objeto2(2);
    static Destrutor objeto3(3);
    func();
    cout<<"Fim da funcao principal"<<endl;
}

//========================================
//----  Function Development
void func(){
    cout<<"Inicio da funcao auxiliar"<<endl;
    Destrutor objeto4(4);
    static Destrutor objeto5(5);
    cout<<"Fim da funcao auxiliar"<<endl;
}
