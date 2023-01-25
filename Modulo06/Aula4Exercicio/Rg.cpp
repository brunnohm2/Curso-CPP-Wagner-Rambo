//========================================
//---- Class Development (Member-Function)
#include "Rg.hpp"
Rg::Rg(const string firstName, const string lastName, int birthYear, int birthMonth, int birthDay, int RGNumber, int RGSuffix):
DadosPessoais(firstName, lastName, birthYear, birthMonth, birthDay),
_RGNumber(RGNumber),
_RGSuffix(RGSuffix)
{cout<<"RG CONSTRUTOR"<<endl;}

Rg::~Rg(){cout<<"RG DESTRUTOR"<<endl;}

void    Rg::setRGNumber(int RGNumber)   {_RGNumber = RGNumber;}
int     Rg::getRGNumber() const         {return _RGNumber;}

void    Rg::setRGSuffix(int RGSuffix)   {_RGSuffix = RGSuffix;}
int     Rg::getRGSuffix() const         {return _RGSuffix;}

void    Rg::dispRG()const                {cout<<_RGNumber<<'-'<<_RGSuffix<<endl;}
void    Rg::dispPersonalData()const
{
    DadosPessoais::dispPersonalData();
    cout<<"Numero do RG:       ";
    dispRG();
}
