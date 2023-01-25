//========================================
//---- Class Development (Member-Function)
#include "CursoAfiliado.hpp"
CursoAfiliado::CursoAfiliado(const string &curso, const string &empresa, double taxa, int quantidade):
    Cursos(curso, empresa)
    {setTaxa(taxa); setQuantidade(quantidade);}

CursoAfiliado::~CursoAfiliado(){}

void    CursoAfiliado::setTaxa(double taxa)         {taxaPercent = (taxa>0.0 && taxa<1.0) ? taxa : 0.0;}
double  CursoAfiliado::getTaxa()       const        {return taxaPercent;}

void    CursoAfiliado::setQuantidade(int quantidade){quantidadeVendas = (quantidade<0.0) ? 0.0 : quantidade;}
int     CursoAfiliado::getQuantidade() const        {return quantidadeVendas;}

double  CursoAfiliado::calculaLucro()  const        {return getTaxa()*getQuantidade();}
void    CursoAfiliado::mostraValores() const
{
    cout<<"\n                    Curso: ";
    Cursos::mostraValores();
    cout<<"\n                     Taxa: "<<getTaxa()
        <<"\n               Quantidade: "<<getQuantidade();
}
