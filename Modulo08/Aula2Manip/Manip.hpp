//==================================
//---- Library
#include <iostream>         // Biblioteca padrao de entrada e saida de dados
using std::endl;            // Linha nova
using std::cout;            // Imprime dados
using std::cin;             // Obtem dados inseridos na tela
using std::ostream;

#include <iomanip>          // Biblioteca Manipuladores de fluxo parametrizados
using std::setprecision;    // Precisao para saida numerica Ex.: setprecision(2)
using std::setw;            // Permite configurar a largura de um campo Ex.: setw(5)

//========================================
//----  Criando manipulador de fluxo (Prototipo)
ostream &tabulacao(ostream &parametro);
ostream &underscore(ostream &parametro);
