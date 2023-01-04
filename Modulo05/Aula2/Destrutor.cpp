//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  5
// Lesson:  2
// Date:    2022-12-19
// IDE:     Code::Blocks
// File:    Destrutor.cpp
//
//========================================
//---- Class Development (Member-Function)
#include "Destrutor.hpp"
Destrutor::Destrutor(int id){
    idNumber = id;
    cout<<"Gerou o objeto: "<< idNumber << endl;
}
Destrutor::~Destrutor(){
    cout<<"Limpou o objeto: "<< idNumber << endl;
}
