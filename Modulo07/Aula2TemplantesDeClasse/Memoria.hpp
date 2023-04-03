//========================================
//---- Class Development
#ifndef MEMORIA
#define MEMORIA
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

template <typename myType, unsigned short N>
class Memoria
{
  public:
    Memoria();

    void    gravaDados();
    void    imprimeDados();

  private:
    myType  memoArray[N];    //Memoria disponivel para o usuario
};

#include "Memoria.cpp"
#endif
