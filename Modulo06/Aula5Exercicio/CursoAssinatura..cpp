//========================================
//---- Class Development (Member-Function)

#include "CursoAssinatura.hpp"
CursoAssinatura::CursoAssinatura(const string &curso, const string &empresa, double valorAssinatura, int quantidadeAssinatura):
    Cursos(curso, empresa)
    {setValorAssinatura(valorAssinatura); setQuantidadeAssinatura(quantidadeAssinatura);}

CursoAssinatura::~CursoAssinatura(){}

void    CursoAssinatura::setValorAssinatura         (double valorAssinatura)    {_valorAssinatura = valorAssinatura<0 ? 0 : valorAssinatura;}
double  CursoAssinatura::getValorAssinatura         () const                    {return _valorAssinatura;}

void    CursoAssinatura::setQuantidadeAssinatura    (int quantidadeAssinatura)  {_quantidadeAssinatura = quantidadeAssinatura<0 ? 0: quantidadeAssinatura;}
int     CursoAssinatura::getQuantidadeAssinatura    () const                    {return _quantidadeAssinatura;}

double  CursoAssinatura::calculaLucro               ()  const
{
    if(getQuantidadeAssinatura()>=300) return ((getValorAssinatura()*getQuantidadeAssinatura())-(((getValorAssinatura()*getQuantidadeAssinatura())*10)/100));
    else return getValorAssinatura()*getQuantidadeAssinatura();
}
void    CursoAssinatura::mostraValores              ()  const
{
    Cursos::mostraValores();
    cout<<"\n         Valor da Assinatura: "<<getValorAssinatura()
        <<"\n    Quantidade de Assinatura: "<<getQuantidadeAssinatura();
}
