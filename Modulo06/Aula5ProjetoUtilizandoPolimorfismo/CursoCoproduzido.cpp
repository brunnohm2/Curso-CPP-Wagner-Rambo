//========================================
//---- Class Development (Member-Function)

#include "CursoCoproduzido.hpp"
CursoCoproduzido::CursoCoproduzido(const string &curso, const string &empresa, double taxa, int quantidade, double valorFixo):
    CursoAfiliado(curso, empresa, taxa, quantidade)
    {setValorFixo(valorFixo);}

CursoCoproduzido::~CursoCoproduzido(){}

void    CursoCoproduzido::setValorFixo(double valorFixo){cursoValorFixo = (valorFixo<0.0) ? 0.0 : valorFixo;}
double  CursoCoproduzido::getValorFixo()  const         {return cursoValorFixo;}

double  CursoCoproduzido::calculaLucro()  const         {return getValorFixo() + CursoAfiliado::calculaLucro();}
void    CursoCoproduzido::mostraValores() const
{
    CursoAfiliado::mostraValores();
    cout<<"\n             Valor fixo $: "<<getValorFixo();
}
