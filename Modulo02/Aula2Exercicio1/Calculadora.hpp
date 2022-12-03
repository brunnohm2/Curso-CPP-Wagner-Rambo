//
// Curso: C++, Curso Completo
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai// Curso: C++, Curso Completo
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai
// Modulo: 2
// Aula: 2
// Data: 2022-12-02
// IDE Code::Blocks
// Arquivo Calculadora.hpp contendo as seções pública e privada, construtor,
//                        funções-membro e membros de dados genéricos


//=========================================================
//--------Bibliotecas--------
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

class Calculadora{
    public: // Public e um especificador de acesso
        Calculadora(string);
        void operador_de_calculos();

    private: // Private e um especificador de acesso onde o usuario final nao usa diretamente os dados
        string tituloCalculadora;

};  // End da classe Calculadora
    // Toda classe precisa terminar com o ; no final
