
//========================================
//---- Class Development
#ifndef PRODESCALAR
#define PRODESCALAR

//==================================
//---- Library
#include <iostream>         // Biblioteca padrao de entrada e saida de dados
using std::endl;            // Linha nova
using std::cout;            // Imprime dados
using std::cin;             // Obtem dados inseridos na tela

class ProdEscalar
{
public:
  ProdEscalar             (int a=1, int b=1, int c=1);
  ProdEscalar operator*   (int prod);

  int getA()  const;
  int getB()  const;
  int getC()  const;

  void  printResult() const;

private:
  int _a;
  int _b;
  int _c;
};
#endif

