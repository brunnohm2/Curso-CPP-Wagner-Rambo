//========================================
//---- Class Development (Member-Function)
#include "Rg.hpp"
Rg::Rg(const string firstName, const string lastName, int birthYear, int birthMonth, int birthDay, int RGNumber, int RGSuffix):
DadosPessoais(firstName, lastName, birthYear, birthMonth, birthDay),
_RGNumber(RGNumber),
_RGSuffix(RGSuffix)
{}

Rg::~Rg(){}

void    Rg::setRGNumber(int RGNumber)   {_RGNumber = RGNumber;}
int     Rg::getRGNumber() const         {return _RGNumber;}

void    Rg::setRGSuffix(int RGSuffix)   {_RGSuffix = RGSuffix;}
int     Rg::getRGSuffix() const         {return _RGSuffix;}

void    Rg::getRG()const                {cout<<_RGNumber<<'-'<<_RGSuffix<<endl;}
void    Rg::getPersonalData()const
{
    DadosPessoais::getPersonalData();
    cout<<"Numero do RG:       ";
    getRG();
}
