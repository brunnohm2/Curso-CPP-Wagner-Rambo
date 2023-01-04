//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  5
// Lesson:  2
// Date:    2022-12-19
// IDE:     Code::Blocks
// File:    Memory.cpp
//

//==================================
//---- Library
 #include <iostream>         // Biblioteca padrao de entrada e saida de dados
 using std::endl;            // Linha nova
 using std::cout;            // Imprime dados
 using std::cin;             // Obtem dados inseridos na tela
 using std::fixed;           // Garante que as casas decimais depois da virgula sejam exibidas
 using std::left;            // Justifica o texto a esquerda
 using std::right;           // Justifica o texto a direita

 #include <string>           // Biblioteca Classe de string no padrao C++
 using std::string;          // Permite o uso de strings

 #include <iomanip>          // Biblioteca Manipuladores de fluxo parametrizados
 using std::setw;            // Permite configurar a largura de um campo Ex.: setw(5)

 #include <cstdlib>          // Gerenciamento dinâmico de memória, geração de números aleatórios, comunicação com o ambiente, aritmética de inteiros, pesquisa, classificação e conversão.
 using std::rand;            // Faz o sorteio de numeros aleatorios Ex.: linha=rand()%13 retorna aleatorios de ate o valor 13
 using std::srand;           // Insere uma semente para conseguir numeros aleatorios Ex.: srand(time(0))

 #include <ctime>            // Biblioteca para gerenciamento de tempo
 using std::time;            // Retorna o tempo decorrido desde 00:00 de 1 Janeiro de 1970;


//========================================
//---- Class Development
#ifndef MEMORY
#define MEMORY
class Memory{
    public:
        Memory(int=1);
        ~Memory();
        void listNumbers();
    private:
        void getRandomNumbers();
        int ram[16] = {0};
        int memory;
};
#endif
