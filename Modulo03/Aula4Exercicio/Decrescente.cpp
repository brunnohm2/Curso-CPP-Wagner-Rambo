 //
 // Curso: C++, Curso Completo
 // Professor: Wagner Rambo
 // Aluno: Brunno Hiroshy Murai
 // Modulo: 3
 // Aula: 4 Exercicio
 // Data: 2022-12-09
 // IDE Code::Blocks
 // Arquivo Decrescente.cpp
 //

#include "Decrescente.hpp"
Decrescente::Decrescente(){
    cout<<"Array Decrescente!"<<endl;
}
void Decrescente::armazenaValores(){
    cout<<"Voce tem "<<numero_posicoes<<" valores para digitar."<<endl;
    for(int i=0;i<numero_posicoes;i++){
        cout<<i+1<<"/"<<numero_posicoes<<" inserir: ";
        cin>>meuArray[i];
    }
    cout<<"Posicao original"<<endl;
    for(int i=0;i<numero_posicoes;i++) cout<<setw(6)<<"||"<<setw(6)<<meuArray[i];
    cout<<setw(6)<<"||"<<endl;
}
void Decrescente::ordenaValores(){
    int temp;
    for(int i=0;i<numero_posicoes;i++){
        for(int j=i;j<numero_posicoes;j++){
            if(meuArray[i]<meuArray[j]){
                temp=meuArray[i];
                meuArray[i]=meuArray[j];
                meuArray[j]=temp;
            }
        }
    }

    cout<<"Ordem decrescente"<<endl;
    for(int i=0;i<numero_posicoes;i++) cout<<setw(6)<<"||"<<setw(6)<<meuArray[i];
    cout<<setw(6)<<"||"<<endl;
}
void Decrescente::buscaValores(int posicao){
    if(posicao<=numero_posicoes-1 && posicao>=0){
        cout<<"============================================"<<endl;
        cout<<"A posicao "<<posicao<<" tem o valor "<<meuArray[posicao]<<endl;
    }
    else if(posicao>numero_posicoes-1){
        cout<<"============================================"<<endl;
        cout<<"Valor da posicao acima da faixa de posicoes"<<endl;
    }
    else if(posicao<0){
        cout<<"============================================"<<endl;
        cout<<"Valor abaixo da faixa de posicoes"<<endl;
    }
}
