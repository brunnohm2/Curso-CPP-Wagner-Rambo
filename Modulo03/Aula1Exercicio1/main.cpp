//
// Curso: C++, Curso Completo
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai
// Modulo: 3
// Aula: 1 Exercicio
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

void randomNumbers(int numbers, int p_inicio, int p_fim, int colunas);
inline unsigned rangeRand(unsigned first, unsigned range);
int soma(int num);

int main(){
    char    opt=0;
    int     numbers=0, p_inicio=0, p_fim=0, colunas=0;
    do{
        cout<<"Sortear quantos numeros: ";
        cin>>numbers;

        cout<<"Faixa de numeros: ";
        cin>>p_inicio>>p_fim;

        cout<<"Quantidade de colunas: ";
        cin>>colunas;

        cout<<"\n================================\n";
        cout<<"Valores sorteados:\n";
        srand(time(0));
        randomNumbers(numbers, p_inicio, p_fim, colunas);


        cout<<"\n================================\n";
        cout<<"Soma de todos os valores: "<<soma(0)<<endl;
        cout<<"================================\n";
        cout<<"s para sair: ";
        cin>>opt;
    }while(opt!='s');

    return 0;
}
void randomNumbers(int numbers, int p_inicio, int p_fim, int colunas){
    int range=0;
    for(int i=1; i<=numbers; i++){
        range = rangeRand(p_inicio,p_fim);
        soma(range);
        cout<<setw(5)<<range;
        if(i%colunas==0) cout<<endl;

    }//end for
}//end randomNumbers
inline unsigned rangeRand(unsigned first, unsigned range){
    return first+rand()%range;

}//end rangeRand
int soma(int num){
    static int resultado=0;
    resultado+=num;
    return resultado;
}// end soma
