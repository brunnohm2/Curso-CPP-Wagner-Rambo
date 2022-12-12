 //
 // Curso: C++, Curso Completo
 // Professor: Wagner Rambo
 // Aluno: Brunno Hiroshy Murai
 // Modulo: 3
 // Aula: 5
 // Data: 2022-12-11
 // IDE Code::Blocks
 // Arquivo main.cpp
 //
#include <iostream>             // Biblioteca padrao de entrada e saida de dados
    using std::endl;            // Linha nova
    using std::cout;            // Saida de dados
    using std::cin;             // Entrada de dados

#include <iomanip>              // Biblioteca Manipuladores de fluxo parametrizados
    using std::setw;            // Permite configurar a largura de um campo

#include <cmath>                // Biblioteca Funcoes gerais para calculos matematicos
    using std::sqrt;            // Calcula a raiz quadrada         Ex.: sqrt(4) calcula raiz quadrada de 4
//==========================================================================================================
// Prototipo
void calculaFrequencia();
//==========================================================================================================
int main()
{

    calculaFrequencia();

    return 0;
}
//==========================================================================================================
// Funcoes
void calculaFrequencia(){
    //1/(2*M_PI*(sqrt(indutor*capacitor[1])))

    double indutor=0.0002;
    double capacitor[5]={1e-09,1e-08,47e-08,1e-07,1e-06};
    double meuArray [5][3]={0};

    for(int i=0; i<5; i++){
        meuArray[i][0]=capacitor[i];
        meuArray[i][1]=indutor;
        meuArray[i][2]=1/(2*M_PI*(sqrt(indutor*capacitor[i])));
    }
    for(int i=0; i<5; i++){
        cout<<endl;
        cout<<"|"<<setw(10)<<meuArray[i][0]<<" | "<<setw(10)<<meuArray[i][1]<<" | "<<setw(10)<<meuArray[i][2]<<" |";
    }

}
