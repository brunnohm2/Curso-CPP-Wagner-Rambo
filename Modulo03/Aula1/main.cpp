//
// Curso: C++, Curso Completo
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai
// Modulo: 3
// Aula: 1
// Data: 2022-12-05
// IDE Code::Blocks
// Arquivo main.cpp
//

#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;

#include <iomanip>
    using std::setw;

#include <cstdlib>
    using std::rand;    // Faz o sorteio de numeros
    using std::srand;   // Insere uma semente para conseguir numeros aleatorios e nao pseudo-randomicos

#include <ctime>
    using std::time;

void randomNumbers(int numbers);
inline unsigned rangeRand(unsigned first, unsigned range);

int main(){
    char opt=0;
    int  num=0;

    do{
        cout<<"Sortear quantos numeros: ";
        cin>>num;

        srand(time(0));
        randomNumbers(num);

        cout<<"s para sair: ";
        cin>>opt;
    }while(opt!='s');

    return 0;
}
void randomNumbers(int numbers){
    for(int i=1; i<=numbers; i++){
        cout<<setw(5)<<rangeRand(1,50);

        if(i%5==0) cout<<endl;

    }//end for
}//end randomNumbers
inline unsigned rangeRand(unsigned first, unsigned range){
    return first+rand()%range;

}//end rangeRand
