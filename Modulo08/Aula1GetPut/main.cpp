//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  8
// Lesson:  1
// Date:    2023-01-30
// IDE:     Code::Blocks
// File:    main.cpp
//

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
//========================================
//---- FUNÇÕES-MEMBRO get e put
//- As *funções-membro* **get** e **put** podem ser utilizadas com **cin** e **cout**
//  para ler e escrever bytes que o usuário digitar.
//- O trecho a seguir apresenta um exemplo de aplicação.

//---- Exemplo

//    char dado = '0';
//    cout << "Digite um dado: ";
//    dado = cin.get();           //armazena a entrada do usuário em dado
//    cout << "Voce digitou: ";
//    cout.put(dado) << endl;     //imprime o conteúdo de dado

////    cout.put(48);

//========================================
//---- FUNÇÃO-MEMBRO get COM PARÂMETROS
//- A função-membro get pode ser utilizada com os parâmetros:
//- get(buffer, tamanho)
//- get(buffer, tamanho, delimitador)
//- Exemplificando
//- char buffer[20];//buffer de tamanho 20
//- cin.get(buffer, 20);//armazena todos os dados digitados até o ‘\n’
//- cin.get(buffer, 20, ‘A’);//armazena os dados digitados até o ‘A’

//---- Exemplo

//- Sem delimitador
//    const int SIZE_BUF = 20;
//    char buffer[SIZE_BUF];
//
//    cout<<"Digite uma frase:";
//    cin.get(buffer, SIZE_BUF);
//
//    cout<<"Voce digitou a frase: "<< buffer<<endl;

//- Com delimitador
//    const int SIZE_BUF = 20;
//    char buffer[SIZE_BUF];
//
//    cout<<"Digite uma frase:";
//    cin.get(buffer, SIZE_BUF, 't');
//
//    cout<<"Voce digitou a frase: "<< buffer<<endl;

//========================================
//----  FUNÇÃO-MEMBRO getline
//- A função-membro getline pode ser utilizada para a leitura de um array de caracteres.

//---- Exemplo

//    const int SIZE_BUF = 50;
//    char buffer[SIZE_BUF];
//
//    cout<<"Digite uma frase:";
//    cin.getline(buffer, SIZE_BUF);
//
//    cout<<"Voce digitou a frase: "<< buffer<<endl;

//========================================
//----  FUNÇÕES-MEMBRO read, write e gcount
//- Você pode utilizar a função-membro
// write para escrita de dados,
// read para leitura,
// gcount para informar o número de caracteres lidos pela última operação de entrada.

//---- Exemplo

    const int SIZE_BUF = 50;
    char buffer[SIZE_BUF];

    cout<<"Digite uma frase: ";
    cin.read(buffer, SIZE_BUF);         //só encerra a leitura quando completar 10 chrs
    cout.write(buffer, cin.gcount());   //imprime o conteúdo

    return 0;
}

























