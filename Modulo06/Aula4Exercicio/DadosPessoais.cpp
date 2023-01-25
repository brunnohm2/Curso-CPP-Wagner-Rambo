//========================================
//---- Class Development (Member-Function)
#include "DadosPessoais.hpp"
DadosPessoais::DadosPessoais(const string firstName, const string lastName, int birthYear, int birthMonth, int birthDay):
_firstName(firstName),
_lastName(lastName),
_birthYear(birthYear),
_birthMonth(birthMonth),
_birthDay(birthDay)
{cout<<"DADOS PESSOAIS CONSTRUTOR"<<endl;}

DadosPessoais::~DadosPessoais(){cout<<"DADOS PESSOAIS DESTRUTOR"<<endl;}

void    DadosPessoais::setFirstName(const string &firstName){_firstName = firstName;}
string  DadosPessoais::getFirstName()const                  {return _firstName;}

void    DadosPessoais::setLastName(const string &lastName)  {_lastName = lastName;}
string  DadosPessoais::getLastName() const                  {return _lastName;}

void    DadosPessoais::setBirthYear(int birthYear)          {_birthYear = birthYear;}
int     DadosPessoais::getBirthYear() const                 {return _birthYear;}

void    DadosPessoais::setBirthMonth(int birthMonth)        {_birthMonth = birthMonth;}
int     DadosPessoais::getBirthMonth() const                {return _birthMonth;}

void    DadosPessoais::setBirthDay(int birthDay)            {_birthDay = birthDay;}
int     DadosPessoais::getBirthDay() const                  {return _birthDay;}

void    DadosPessoais::dispFullName() const                  {cout<<"Nome Completo:      "<<_firstName<<' '<<_lastName<<endl;}
void    DadosPessoais::dispBirthDate()const                  {cout<<"Data de Nascimento: "<<_birthYear<<'-'<<_birthMonth<<'-'<<_birthDay<<endl;}

void    DadosPessoais::dispPersonalData()const               {dispFullName();dispBirthDate();}
