//
// Curso: C++, Curso Completo de Wagner Rambo
// Autor: Brunno Hiroshy Murai
// Modulo: 1
// Aula: 3
// Data: 2022-11-27
// IDE Code::Blocks
//
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <string> // Classe de string no padrao C++
using std::string;
using std::getline;
//=========================================================
//--------Desenvolvimento da Classe--------
class SalesScore{
    public: // public e um especificador de acesso

    void bootSystem(string storeTitle){
        cout<< "Score de vendas!\n"<<storeTitle<<endl;
    } // Fim bootSystem
}; // Fim da classe SalesStore
// Toda classe precisa terminar com o ; no final


//=========================================================
//--------Funcao Principal--------
int main()
{
    string storeTitle;  //String de caracteres para armazenar o titulo da loja
    SalesScore mySales; //objeto mySales

    cout<<"Insira o nome da loja:"<<endl;
    getline(cin, storeTitle); //le o nome da loja com espacos em branco
    mySales.bootSystem(storeTitle);
    cout<<endl;

    while(1);
    return 0;
} // Fim da classe main
