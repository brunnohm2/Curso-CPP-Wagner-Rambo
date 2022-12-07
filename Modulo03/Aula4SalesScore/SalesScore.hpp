//
// Curso: C++, Curso Completo
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai// Curso: C++, Curso Completo
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai
// Modulo: 3
// Aula: 4
// Data: 2022-12-07
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
        const static int products=10; // Numero de produtos e serem vendidos

        SalesScore(string, const int salesArray[]); // Funcao-membro construtora que obtem o nome da loja
        void    setStoreTitle(string);  // Funcao-membro que configura o nome da loja
        string  getStoreTitle();        // Funcao membro que obtem o nome da loja
        void    bootSystem();           // Funcao-membro para inicializacao que retorna [Score de vendas! e nome da loja]
        void    calcSalesAverage();     // Funcao-membro para calcular o total e a media de n vendas
        void    enterProducts();        // Funcao-membro para inserir o tipo de produto vendido
        void    productsReport();       // Funcao-membro para imprimir o relatorio da quantidade de produtos vendido

        void    processSales();         // Funcao-membro Processa operacoes com os dados
        int     getMin();               // Funcao-membro Localiza o valor minimo
        int     getMax();               // Funcao-membro Localiza o valor maximo
        double  getAvg();               // Funcao-membro Determina a media de vendas
        void    genGraph();             // Funcao-membro Grafico de barras para distribuicao de vendas
        void    dispSales();            // Funcao-membro Apresenta resultados

    private: // Private e um especificador de acesso onde o usuario final nao usa diretamente os dados
        string storeTitle;              // Declaracao para um membro de dados
        int sales[products];            // Array para armazenar vendas

        int prodA;
        int prodB;
        int prodC;

};  // End da classe SalesStore
    // Toda classe precisa terminar com o ; no final
