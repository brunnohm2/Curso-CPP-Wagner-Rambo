#include "ProdEscalar.hpp"

//========================================
//---- Class Development (Member-Function)

//---- Construtor
ProdEscalar::ProdEscalar(int a, int b, int c):
_a(a),_b(b),_c(c)
{}

//---- Sobrecarga de operadot *
ProdEscalar ProdEscalar::operator*(int prod)
{
  _a = _a*prod;
  _b = _b*prod;
  _c = _c*prod;

  return ProdEscalar(_a, _b, _c);
}

//---- getA
int ProdEscalar::getA()const  {return _a;}

//---- getA
int ProdEscalar::getB()const  {return _b;}

//---- getA
int ProdEscalar::getC()const  {return _c;}

//---- printResult
void  ProdEscalar::printResult()const
{
  cout<<'('<<getA()<<','<<getB()<<','<<getC()<<')'<<endl;
}
