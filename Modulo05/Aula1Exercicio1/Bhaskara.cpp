//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  4
// Lesson:  1 Exercise
// Date:    2022-12-18
// IDE:     Code::Blocks
// File:    Baskara.cpp
//

//========================================
//---- Class Development (Member-Function)
#include "Bhaskara.hpp"

Bhaskara::Bhaskara(int a, int b, int c){
    aValue = a;
    bValue = b;
    cValue = c;
    cout<<"Usar valor pre-definidos (y) para Sim (n) para Nao"<<endl;
    cin>>question;
    if(question=='n'){
        cout<<"Inserir os valor a b c"<<endl;
        cout<<">>>>";
        cin>>aValue>>bValue>>cValue;
    }
}
void Bhaskara::viewValues(){
    cout<<"Equacao:"<<endl;
    cout<<"        "<<aValue<<"xx   "<<bValue<<"x   "<<cValue<<endl;
    cout<<endl;
    cout<<"Resposta:"<<endl;
    if(equationValidator()==false) cout<<"Delta negativo. Vai gerar numeros complexos"<<endl;
    else {
        cout<<"x1 = "<< bhaskaraEquationOne() << endl;
        cout<<"x2 = "<< bhaskaraEquationTwo() << endl;
    }
}
int Bhaskara::deltaEquation(){
    return pow(bValue, 2)-(4*aValue*cValue);
}
int Bhaskara::equationValidator(){
    if(deltaEquation()>=0) return true;
    else return false;
}
double Bhaskara::bhaskaraEquationOne(){
    return (-(bValue)+sqrt(deltaEquation()))/(2*aValue);
}
double Bhaskara::bhaskaraEquationTwo(){
    return (-(bValue)-sqrt(deltaEquation()))/(2*aValue);
}
