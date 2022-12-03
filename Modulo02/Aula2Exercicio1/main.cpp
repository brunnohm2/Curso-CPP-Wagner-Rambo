//
// Curso: C++, Curso Completo
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai
// Modulo: 2
// Aula: 2
// Data: 2022-12-02
// IDE Code::Blocks
// Arquivo main.cpp
//
// Faça uma classe em C++ que contenha um construtor para gerar uma mensagem de inicialização e
// uma função onde o usuário entrará com 6 números inteiros. Após entrar com os 6 números, a saída
// do sistema vai imprimir a soma do primeiro com o segundo, a subtração entre o terceiro e o quarto
// e a multiplicação entre o quinto e o sexto números inseridos.
// Exemplo: o usuário insere: 4, 7, 11, 23, 42, 9. O sistema gera a saída:
// 11 (soma de 4 com 7);
// -12 (diferença entre 11 e 23);
// 378 (produto entre 42 e 9).
// Utilize while e todos os conhecimentos aprendidos até aqui no curso. Organize a classe em arquivos .hpp e .cpp.
//
#include "Calculadora.hpp"

int main(){
    Calculadora minhaCalculadora("Calculadora Max Power");
    minhaCalculadora.operador_de_calculos();
}
