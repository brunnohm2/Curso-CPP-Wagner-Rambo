//
// Curso: C++, Curso Completo de Wagner Rambo
// Autor: Brunno Hiroshy Murai
// Modulo: 1
// Aula: 5
// Data: 2022-11-29
// IDE Code::Blocks
// Arquivo SalesScore.hpp contendo as seções pública e privada, construtor,
//                        funções-membro e membros de dados genéricos
//=========================================================
//--------Desenvolvimento da Classe--------
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class SalesScore{
    public: // Public e um especificador de acesso

        SalesScore(string);         // Funcao-membro construtora que obtem o nome da loja
        void setStoreTitle(string); // Funcao-membro que configura o nome da loja
        string getStoreTitle();     // Funcao membro que obtem o nome da loja
        void bootSystem(string);    // Funcao-membro para inicializacao que retorna [Score de vendas! e nome da loja]

    private: // Private e um especificador de acesso onde o usuario final nao usa diretamente os dados

        string storeTitle; // Declaracao para um membro de dados

};  // End da classe SalesStore
    // Toda classe precisa terminar com o ; no final

