//========================================
//---- Class Development
#ifndef CURSOS
#define CURSOS

//==================================
//---- Library
#include <string>           // Biblioteca Classe de string no padrao C++
using std::string;          // Permite o uso de strings
#include <iostream>
using std::cout;
class Cursos
{
    public:
        Cursos(const string &curso, const string &empresa);
        ~Cursos();

        void            setNomeCurso    (const string &curso);
        string          getNomeCurso    ()  const;

        void            setNomeEmpresa  (const string &empresa);
        string          getNomeEmpresa  ()  const;

        virtual double  calculaLucro    ()  const = 0;  // Quando iguala a funcao virtual a 0 indica que essa funcao é pura, assim podendo sobreescreve-la nas funcoes derivadas
        virtual void    mostraValores   ()  const;

    private:
        string          nomeCurso;
        string          nomeEmpresa;
};
#endif
