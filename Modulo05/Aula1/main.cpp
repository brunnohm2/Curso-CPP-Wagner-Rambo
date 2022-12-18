//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  5
// Lesson:  1
// Date:    2022-12-18
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----  Class Include
#include "PrintVal.hpp"

//========================================
//----  Function Prototype

//========================================
//----  Main Function
int main()
{
  PrintVal  valor;               //declara objeto valor
  PrintVal  *valorPtr = &valor;  //declara ponteiro para valor
  PrintVal  &valorRef =  valor;  //declara referência para valor

  valor.setValue(4);             //acesso por objeto
  valor.printThis();

  valorRef.setValue(8);          //acesso por referência
  valorRef.printThis();

  valorPtr->setValue(15);        //acesso por ponteiro
  valorPtr->printThis();


  cout << "\n\nFim." << endl;
  while(1);
  return 0;

} //end main
//========================================
//----  Fuction Development
