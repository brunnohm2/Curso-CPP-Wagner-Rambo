//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  5
// Lesson:  2
// Date:    2022-12-19
// IDE:     Code::Blocks
// File:    Destrutor.hpp
//

//========================================
//----  Library
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

 #include <cstring>          // Biblioteca Manipuladores de vetores de caracteres
 using std::strcpy;          // Copia string Ex.: strcpy(str2,str1) copia toda a str1 para str2
 using std::strncpy;         // Copia string em partes Ex.: strncpy(str2, str1,4) copia 4 caracteres da str1 para str2, apos copiar inserir o caractere nulo manualmente Ex.: str2[4]= '\0'
 using std::strcat;          // Adiciona string ao final Ex.: strcat(str2,str1) adiciona str1 ao final de str2
 using std::strncat;         // Adiciona string em partes Ex.: strncat(str2,str1,4) adiciona 4 caracteres de str1 para str2, apos a adicionar os caracteres, inserir o caractere nulo manualmente Ex.: str2[4]='\0'
 using std::strcmp;          // Compara strings Ex.: strcmp(str1,str2) retorna 0 se for igual, retorna valor negativo se str1 for menor que str2, retorna valor positivo se str1 for maior que str2
 using std::strncmp;         // Compara strings Ex.: strncmp(str1, str2, 4) compara os primeiros 4 caracteres, se str1 menor que str2 retorna valor negativo, se str1 maior que str2, retorna valor positivo
 using std::strtok;          // Separa string em tokens (sequencia de caracteres separados por um caractere delimitador) Ex.: strtok(str1, " "); Modulo 4 Aula 5
 using std::strlen;          // Retorna o numero de caracteres da string

 #include <iomanip>          // Biblioteca Manipuladores de fluxo parametrizados
 using std::setprecision;    // Precisao para saida numerica Ex.: setprecision(2)
 using std::setw;            // Permite configurar a largura de um campo Ex.: setw(5)

 #include <cmath>            // Biblioteca Funcoes gerais para calculos matematicos
 using std::pow;             // Calcula a potencia de um numero Ex.: pow(3, 4) 3 elevado a 4
 using std::sqrt;            // Calcula a raiz quadrada         Ex.: sqrt(4) calcula raiz quadrada de 4

 #include <cstdlib>          // Gerenciamento dinâmico de memória, geração de números aleatórios, comunicação com o ambiente, aritmética de inteiros, pesquisa, classificação e conversão.
 using std::rand;            // Faz o sorteio de numeros aleatorios Ex.: linha=rand()%13 retorna aleatorios de ate o valor 13
 using std::srand;           // Insere uma semente para conseguir numeros aleatorios Ex.: srand(time(0))

 #include <ctime>            // Biblioteca para gerenciamento de tempo
 using std::time;            // Retorna o tempo decorrido desde 00:00 de 1 Janeiro de 1970;

//========================================
//---- Class Development
#ifndef DESTRUTOR
#define DESTRUTOR
class Destrutor{
    public:
        Destrutor(int);
        ~Destrutor();
    private:
        int idNumber;
};
#endif
