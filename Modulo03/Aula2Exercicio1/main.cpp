//
// Curso: C++, Curso Completo
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai
// Modulo: 3
// Aula: 2 Exercicio
// Data: 2022-12-06
// IDE Code::Blocks
// Arquivo main.cpp
// Utilizando sobrecarga de funções e templates de funções,
// desenvolva uma função para imprimir
// de 1 a 4 dados na tela.

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//============================
//Prototipo de funcoes
template <typename BH>
BH imprimir(BH dado1);

template <typename BH>
BH imprimir(BH dado1, BH dado2);

template <typename BH>
BH imprimir(BH dado1, BH dado2, BH dado3);

template <typename BH>
BH imprimir(BH dado1, BH dado2, BH dado3, BH dado4);
//============================
//Main
int main(){
    imprimir("=========================");
    imprimir(1);
    imprimir("=========================");
    imprimir(1, 1);
    imprimir("=========================");
    imprimir(1,1,1);
    imprimir("=========================");
    imprimir("String 1", "String 2", "String 3", "String 4");

}
//============================
//Funcoes
template <typename BH>
BH imprimir(BH dado1){
    cout<<dado1<<endl;

    return 0;
}
template <typename BH>
BH imprimir(BH dado1, BH dado2){
    cout<<dado1<<" "<<dado2<<endl;

    return 0;
}
template <typename BH>
BH imprimir(BH dado1, BH dado2, BH dado3){
    cout<<dado1<<" "<<dado2<<" "<<dado3<<endl;

    return 0;
}
template <typename BH>
BH imprimir(BH dado1, BH dado2, BH dado3, BH dado4){
    cout<<dado1<<" "<<dado2<<" "<<dado3<<" "<<dado4<<endl;

    return 0;
}
