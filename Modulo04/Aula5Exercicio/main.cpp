//
// Curso: C++, Curso Completo
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai
// Modulo: 4
// Aula: 5
// Data: 2022-12-16
// IDE Code::Blocks
// Arquivo main.cpp
//
//==================================
// Bibliotecas
#include <iostream>         // Biblioteca padrao de entrada e saida de dados
    using std::endl;            // Linha nova
    using std::cout;            // Saida de dados
    using std::cin;             // Entrada de dados

#include <cstring>          // Biblioteca Manipuladores de vetores de caracteres
    using std::strcpy;          // Copia string Ex.: strcpy(str2,str1) copia toda a str1 para str2
    using std::strtok;          // Separa string em tokens (sequencia de caracteres separados por um caractere delimitador) Ex.: strtok(str1, " "); Modulo 4 Aula 5

//==================================
// Prototipos de Funcoes
int main(){
    char serial[] = "aaaaa-bbbbb-ccccc-ddddd";
    char entrada[]= "aaaaa-bbbbb-ccccc-ddddd";
    char *tokenPtr;
    int opt = 0;
    cout<<"Adicione o numero serial no seguinte formato"<<endl;
    cout<<serial<<endl;
    cout<<"Digite o valor de serial valido:"<<endl;
    cin>>entrada;
    strcpy(serial, entrada);
    cout<<"Numero serial adicionado com sucesso: "<<serial<<endl;

    cout<<"Digite o valor de serial para entrar no sistema"<<endl;
    cin>>entrada;
    if(strcmp(serial, entrada)!=0){
        cout<<"Serial Invalido"<<endl;
        cout<<"Programa encerrado"<<endl;
        return 0;
    }else if(strcmp(serial, entrada)==0){
        tokenPtr = strtok(entrada, "-");
        while(tokenPtr!=NULL){
            cout<<tokenPtr<<" | ";
            tokenPtr = strtok(NULL, "-");
        }
        strcpy(entrada, serial);

        do{
            cout<<"Digite o ID da parcela do serial (1 a 4)"<<endl;
            cout<<"Digite 0 para o serial completo"<<endl;
            cout<<"Digite 7 para sair"<<endl;
            cin>>opt;
            switch(opt){
                case 1:
                    tokenPtr = strtok(entrada, "-");
                    cout<<tokenPtr<<endl;
                    strcpy(entrada, serial);
                break;
                case 2:
                    tokenPtr = strtok(entrada, "-");
                    tokenPtr = strtok(NULL, "-");
                    cout<<tokenPtr<<endl;
                    strcpy(entrada, serial);
                break;
                case 3:
                    tokenPtr = strtok(entrada, "-");
                    tokenPtr = strtok(NULL, "-");
                    tokenPtr = strtok(NULL, "-");
                    cout<<tokenPtr<<endl;
                    strcpy(entrada, serial);
                break;
                case 4:
                    tokenPtr = strtok(entrada, "-");
                    tokenPtr = strtok(NULL, "-");
                    tokenPtr = strtok(NULL, "-");
                    tokenPtr = strtok(NULL, "-");
                    cout<<tokenPtr<<endl;
                    strcpy(entrada, serial);
                break;
                case 0:
                    cout<<entrada<<endl;
                break;
            }
        }while(opt!=7);
    }

    return 0;
}
//==================================
// Desenvolvimento de Funcoes

