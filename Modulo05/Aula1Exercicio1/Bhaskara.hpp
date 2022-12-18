//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  4
// Lesson:  1 Exercise
// Date:    2022-12-18
// IDE:     Code::Blocks
// File:    Baskara.hpp
//
//========================================
//---- Class Development
#ifndef BHASKARA
#define BHASKARA
//==================================
//---- Library
 #include <iostream>         // Biblioteca padrao de entrada e saida de dados
 using std::endl;            // Linha nova
 using std::cout;            // Imprime dados
 using std::cin;             // Obtem dados inseridos na tela

 #include <cmath>            // Biblioteca Funcoes gerais para calculos matematicos
 using std::pow;             // Calcula a potencia de um numero Ex.: pow(3, 4) 3 elevado a 4
 using std::sqrt;            // Calcula a raiz quadrada         Ex.: sqrt(4) calcula raiz quadrada de 4

class Bhaskara{
    public:
        Bhaskara(int, int, int);
        void    viewValues();
    private:
        int     aValue, bValue, cValue;
        int     deltaEquation();
        int     equationValidator();
        double  bhaskaraEquationOne();
        double  bhaskaraEquationTwo();
        char    question;

};
#endif
