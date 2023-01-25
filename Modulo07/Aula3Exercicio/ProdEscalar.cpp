//========================================
//---- Class Development (Member-Function)
#include "ProdEscalar.hpp"
ProdEscalar::ProdEscalar(int a, int b, int c):
_a(a),
_b(b),
_c(c)
{}
ProdEscalar ProdEscalar::operator*(int prod)
{
    _a = _a*prod;
    _b = _b*prod;
    _c = _c*prod;
    return ProdEscalar(_a, _b, _c);
}
int     ProdEscalar::getA()const        {return _a;}
int     ProdEscalar::getB()const        {return _b;}
int     ProdEscalar::getC()const        {return _c;}
void    ProdEscalar::printResult()const {cout<<'('<<getA()<<','<<getB()<<','<<getC()<<')'<<endl;}
