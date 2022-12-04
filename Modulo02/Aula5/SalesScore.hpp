//
// Curso: C++, Curso Completo
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai// Curso: C++, Curso Completo
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai
// Modulo: 2
// Aula: 5
// Data: 2022-12-04
// IDE Code::Blocks
// Arquivo SalesScore.hpp contendo as seções pública e privada, construtor,
//                        funções-membro e membros de dados genéricos


//=========================================================
//--------Bibliotecas--------
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;           // Garante que as casas depois da virgula sejam exibidas

#include <string>
using std::string;

#include <iomanip>          // Manipuladores de fluxo parametrizados
using std::setprecision;    // Precisao para saida numerica
using std::setw;            // Permite configurar a largura de um campo

//=========================================================
//--------Desenvolvimento da Classe--------
class SalesScore{
    public: // Public e um especificador de acesso
        SalesScore(string);         // Funcao-membro construtora que obtem o nome da loja
        void setStoreTitle(string); // Funcao-membro que configura o nome da loja
        string getStoreTitle();     // Funcao membro que obtem o nome da loja
        void bootSystem();          // Funcao-membro para inicializacao que retorna [Score de vendas! e nome da loja]
        void calcSalesAverage();    // Funcao-membro para calcular o total e a media de n vendas
        void enterProducts();       // Funcao-membro para inserir o tipo de produto vendido
        void productsReport();      // Funcao-membro para imprimir o relatorio da quantidade de produtos vendido

    private: // Private e um especificador de acesso onde o usuario final nao usa diretamente os dados
        string storeTitle; // Declaracao para um membro de dados
        int prodA;
        int prodB;
        int prodC;

};  // End da classe SalesStore
    // Toda classe precisa terminar com o ; no final
