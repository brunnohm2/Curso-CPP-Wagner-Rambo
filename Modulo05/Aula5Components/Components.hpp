//==================================
//---- Library
#include <iostream>         // Biblioteca padrao de entrada e saida de dados
using std::endl;            // Linha nova
using std::cout;            // Imprime dados
using std::cin;             // Obtem dados inseridos na tela

#include <string>           // Biblioteca Classe de string no padrao C++
using std::string;          // Permite o uso de strings

#include <cstring>          // Biblioteca Manipuladores de vetores de caracteres
using std::strcpy;          // Copia string Ex.: strcpy(str2,str1) copia toda a str1 para str2
using std::strlen;          // Retorna o numero de caracteres da string



//========================================
//---- Class Development
#ifndef COMPONENTS
#define COMPONENTS
class Components
{
    public:
        Components(const char * const, const char * const);
        ~Components();
        const char *getTypeComponent();
        const char *getModelComponent();

        static int getComponentCount();

    private:
        char *_typeComponent;
        char *_modelComponent;

        static int _componentCount;

};
#endif

