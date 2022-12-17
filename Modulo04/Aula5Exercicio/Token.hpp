//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  4
// Lesson:  5
// Date:    2022-12-17
// IDE:     Code::Blocks
// File:    token.hpp
//

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
using std::strtok;          // Separa string em tokens (sequencia de caracteres separados por um caractere delimitador) Ex.: strtok(str1, " "); Modulo 4 Aula 5

//========================================
//---- Class Development
class Token{
    public:
        Token();
        void changeSerial();
        void serialView();
        void accessSystem();
        int  openSystem();
        void serialBlockView();
        void extractSerialBlock(int);
    private:
        void printSerial();
        void printMenssage(string);
        void Welcome();
        void printDoubleBar();
        void printSingleBar();
        void getSerialNew();
        int  compareSerial();           //
        char serialNew[24]      = "11111-22222-33333-44444";
        char serialOriginal[24] = "11111-22222-33333-44444";
        char serialCopy[24]     = "11111-22222-33333-44444";
        char *pointer;
        int  access             = false;
        int  blockOption        = 0;
        int  validateSerial();
        void updateSerial();
        void getBlockOption();
        int validateBlockPosicion(int);

};
