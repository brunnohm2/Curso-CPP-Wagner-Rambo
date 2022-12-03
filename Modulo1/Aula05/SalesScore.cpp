//
// Curso: C++, Curso Completo de Wagner Rambo
// Autor: Brunno Hiroshy Murai
// Modulo: 1
// Aula: 5
// Data: 2022-11-29
// IDE Code::Blocks
// Arquivo SalesScore.cpp que contem as implementacoes da funcao-membro
//=========================================================
//--------Desenvolvimento das Funcoes-membro--------
#include "SalesScore.hpp"

SalesScore::SalesScore(string title){ // Funcao-membro construtora que obtem o nome da loja
    setStoreTitle(title);
} // End SalesStore


//=========================================================
void SalesScore::setStoreTitle(string title){        //Funcao-membro que configura o nome da loja
    if(title.length()<=20) storeTitle=title;         //Se title for menor ou igual a 20 caracteres, storeTitle recebe o valor

    if(title.length()>20){
        storeTitle=title.substr(0,20);
        cout<<"O Titulo "<<title<<" excedeu a largura maxima!"<<endl;
    }
}// End setStoreTitle


//=========================================================
string SalesScore::getStoreTitle(){                  //Funcao membro que obtem o nome da loja
    return storeTitle;
}// End getStoreTitle


//=========================================================
void SalesScore::bootSystem(string storeTitle){      //Funcao-membro para inicializacao que retorna [Score de vendas! e nome da loja]
    cout<<"Score de vendas!\n"<<storeTitle<<endl;
}// End bootSystem





