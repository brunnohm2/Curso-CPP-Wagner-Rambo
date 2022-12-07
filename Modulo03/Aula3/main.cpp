//
// Curso: C++, Curso Completo
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai
// Modulo: 3
// Aula: 3 INTRODUÇÃO À RECURSÃO
// Data: 2022-12-06
// IDE Code::Blocks
// Arquivo main.cpp
//

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//============================
//Prototipo de funcoes
unsigned long fact(unsigned long num);
void fact0to5();
int main(){
    cout<<fact(6)<<endl;
    fact0to5();
}

//============================
//Funcoes
unsigned long fact(unsigned long num){
    if(num <= 1)
        return 1;
    else
        return num * fact(num-1);
}
void fact0to5(){
    static int reps = 0;
    cout << fact(reps) << endl;
    reps++;

    if(reps > 6){
        reps = 0;
        return;
    }
    fact0to5();
}
