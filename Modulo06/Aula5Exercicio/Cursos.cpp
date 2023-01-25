//========================================
//---- Class Development (Member-Function)

#include "Cursos.hpp"
Cursos::Cursos(const string &curso, const string &empresa):
    nomeCurso(curso),
    nomeEmpresa(empresa)
    {}

Cursos::~Cursos(){}

void    Cursos::setNomeCurso    (const string &curso)   {nomeCurso = curso;}
string  Cursos::getNomeCurso    ()  const               {return nomeCurso;}

void    Cursos::setNomeEmpresa  (const string &empresa) {nomeEmpresa = empresa;}
string  Cursos::getNomeEmpresa  ()  const               {return nomeEmpresa;}

void    Cursos::mostraValores   ()  const
{
    cout<<"\n                       Curso: ";
    cout<<getNomeCurso()<<" da empresa "<<getNomeEmpresa();
}
