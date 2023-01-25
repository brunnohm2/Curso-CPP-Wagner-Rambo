//==================================
//---- Library
#include <iostream>         // Biblioteca padrao de entrada e saida de dados
using std::endl;            // Linha nova
using std::cout;            // Imprime dados
using std::cin;             // Obtem dados inseridos na tela

#include <string>           // Biblioteca Classe de string no padrao C++
using std::string;          // Permite o uso de strings

//========================================
//---- Class Development
#ifndef DADOSPESSOAIS
#define DADOSPESSOAIS
class DadosPessoais
{
    public:
        DadosPessoais(const string firstName, const string lastName, int birthYear, int birthMonth, int birthDay);
        ~DadosPessoais();
        void    setFirstName    (const string &firstName);
        string  getFirstName    ()const;

        void    setLastName     (const string &lastName);
        string  getLastName     () const;

        void    setBirthYear    (int birthYear);
        int     getBirthYear    () const;

        void    setBirthMonth   (int birthMonth);
        int     getBirthMonth   () const;

        void    setBirthDay     (int birthDay);
        int     getBirthDay     () const;

        void    getFullName     () const;
        void    getBirthDate    () const;

        void    getPersonalData () const;
    private:
        string  _firstName;
        string  _lastName;
        int     _birthYear;
        int     _birthMonth;
        int     _birthDay;

};
#endif

