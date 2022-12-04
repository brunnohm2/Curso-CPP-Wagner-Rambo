//
// Curso: C++, Curso Completo
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai
// Modulo: 2
// Aula: 2
// Data: 2022-12-01
// IDE Code::Blocks
// Arquivo SalesScore.cpp que contem as implementacoes da funcao-membro

//=========================================================
//--------Desenvolvimento das Funcoes-membro--------
#include "SalesScore.hpp"

SalesScore::SalesScore(string title){         // Funcao-membro construtora que obtem o nome da loja
    setStoreTitle(title);
} // End SalesStore
//=========================================================
void SalesScore::setStoreTitle(string title){ //Funcao-membro que configura o nome da loja
    if(title.length()<=20) storeTitle=title;         //Se title for menor ou igual a 20 caracteres, storeTitle recebe o valor

    if(title.length()>20){
        storeTitle=title.substr(0,20);
        cout<<"O Titulo "<<title<<" excedeu a largura maxima!"<<endl;
    }
}// End setStoreTitle
//=========================================================
string SalesScore::getStoreTitle(){           //Funcao membro que obtem o nome da loja
    return storeTitle;
}// End getStoreTitle
//=========================================================
void SalesScore::bootSystem(){                //Funcao-membro para inicializacao que retorna [Score de vendas! e nome da loja]
    cout<<"Score de vendas!\n"<<getStoreTitle()<<endl;
}// End bootSystem
//=========================================================
void SalesScore::calcSalesAverage(){          // Funcao-membro pra calcular o total e a media de n vendas
    int acc     =0; // Acumula valores inseridos pelo usuario
    int counter =0; // Numero de vendas inserido pelo usuario
    int value;      // Armazena o valor de cada venda
    double avg;     // Armazena a media das vendas

    cout<<"Digite o valor da venda ou -1 para sair: ";
    cin>>value;

    while(value!=-1){
        acc+=value;
        counter++;

        cout<<"Digite o valor da venda ou -1 para sair: ";
        cin>>value;

    } // End while

    if(counter!=0){
        avg=static_cast<double>(acc)/counter; // Calcula a media
        cout<<"\nTotal "<<counter<<" vendas "<<acc<<endl;
        cout<<"Media em vendas: "<<setprecision(2)<<fixed<<avg<<endl;

    } // End if
    else cout<<"Nenhum valor de venda foi inserido";
} // End calcSalesAverage
