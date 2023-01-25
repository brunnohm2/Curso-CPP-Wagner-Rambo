//========================================
//---- Class Development (Member-Function)
#include "CursoProprio.hpp"
CursoProprio::CursoProprio(const string &curso, const string &empresa, double valor):
    Cursos(curso, empresa)
    {setValorCurso(valor);}

CursoProprio::~CursoProprio(){}

void    CursoProprio::setValorCurso   (double valor){valorCurso = (valor<0.0)?0.0:valor;}
double  CursoProprio::getValorCurso   ()const       {return valorCurso;}

double  CursoProprio::calculaLucro    ()  const     {return getValorCurso();}
void    CursoProprio::mostraValores   ()  const
{
    Cursos::mostraValores(); //Reutiliza a funcao monstraValores da classe basica abstrata
    cout<<"\n            Valor do curso $: "<<getValorCurso();
}
