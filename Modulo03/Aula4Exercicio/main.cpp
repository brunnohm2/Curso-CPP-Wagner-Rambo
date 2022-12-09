 //
 // Curso: C++, Curso Completo
 // Professor: Wagner Rambo
 // Aluno: Brunno Hiroshy Murai
 // Modulo: 3
 // Aula: 4 Exercicio
 // Data: 2022-12-09
 // IDE Code::Blocks
 // Arquivo main.cpp
 // - Crie um programa em C++ que peça ao usuário para entrar com 5 valores inteiros.
 // - Armazene os valores em um array e após organize os dados em ordem decrescente.
 // - Depois, entra em loop infinito que solicita ao usuário para consultar uma posição
 //   desejada do vetor e mostrar qual conteúdo está armazenado na posição digitada.
 // - Crie uma classe chamada “Decrescente” que contenha o construtor, uma função para organizar o array
 //   passado para ela em ordem decrescente e outra para efetuar a busca pelos conteúdos do array no loop infinito.

#include "Decrescente.hpp"

int main(){
    Decrescente meuArray;
    meuArray.armazenaValores();
    meuArray.ordenaValores();


    int busca;
    while((busca=cin.get())!=EOF){
        cout<<"Digite a posicao para pesquisar o valor \nOu pressione ctrl+d para finalizar.: ";
        cin>>busca;
        meuArray.buscaValores(busca);
    }
    return 0;
}
