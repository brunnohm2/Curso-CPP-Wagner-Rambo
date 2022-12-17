//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  4
// Lesson:  5
// Date:    2022-12-17
// IDE:     Code::Blocks
// File:    token.cpp
//

//========================================
//---- Class Development (Member-Function)
#include "Token.hpp"
Token::Token(){
    printDoubleBar();
    Welcome();
    printSingleBar();
    printMenssage("Seu numero serial padrao");
    printSerial();
    printDoubleBar();
}
void Token::changeSerial(){
    printMenssage("Alteracao de numero serial");
    printSingleBar();
    printMenssage("Digite o numero serial no seguinte formato");
    printMenssage("[aaaaa-aaaaa-aaaaa-aaaaa]");
    getSerialNew();
    updateSerial();
    printDoubleBar();
}
void Token::serialView(){
    printMenssage("Numero serial atual neste sistema");
    printSingleBar();
    printSerial();
    printDoubleBar();
}
void Token::printSerial(){
    cout<<serialOriginal<<endl;
}
void Token::printMenssage(string menssage){
    cout<<menssage<<endl;
}
void Token::Welcome(){
    printMenssage("Bem-Vindo ao Sistema de Token do Curso WR-Kits");
}
void Token::printDoubleBar(){
    cout<<"=============================================="<<endl;
}
void Token::printSingleBar(){
    cout<<"----------------------------------------------"<<endl;
}
void Token::getSerialNew(){
    cout<<">>>> ";
    cin>>serialNew;
}
int Token::compareSerial(){
    if(strcmp(serialOriginal, serialNew)==0) return true;
    else return false;
}
int Token::validateSerial(){
    if(compareSerial()==true) return true;
    else return false;
}
void Token::updateSerial(){
    strcpy(serialOriginal, serialNew);
}
void Token::accessSystem(){
    printMenssage("Digite o serial para acessar o sistema");
    printSingleBar();
    getSerialNew();
    if(validateSerial()==true){
        printMenssage("Sistema aberto");
        access = true;
    }else{
        printMenssage("Senha Incorreta, Sistema encerrado.");
        access = false;
    }
    printDoubleBar();
}
void Token::extractSerialBlock(int serialBlockNumber){
    strcpy(serialCopy, serialNew);
    pointer = strtok(serialCopy, "-");
    if(serialBlockNumber==0) cout<<pointer<<endl;
    else {
        for(int i=0; i<serialBlockNumber; i++) pointer = strtok(NULL, "-");
        cout<<pointer<<endl;
    }
}
int Token::openSystem(){
    if(access == true) return true;
    else return false;
}
void Token::serialBlockView(){
    printMenssage("Visualizacao de bloco serial");
    printSingleBar();
    do{
        printMenssage("Digite 0 para exibir o serial completo");
        printMenssage("Digite de 1 a 4 para exibir a parcela do serial");
        printMenssage("Digite 7 para sair");
        getBlockOption();
        if(blockOption==0) cout<<serialOriginal<<endl;
        else if(blockOption>0 && blockOption<=4) extractSerialBlock(blockOption-1);
        else if(blockOption>4 && blockOption != 7) printMenssage("Opcao Invalida");
    }while(blockOption!=7);
}
void Token::getBlockOption(){
    cout<<">>>> ";
    cin>>blockOption;
}
int Token::validateBlockPosicion(int blockPosicion){
    if(blockPosicion>=0 && blockPosicion<=3) return true;
    else return false;
}
