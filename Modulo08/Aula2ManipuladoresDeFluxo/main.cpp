//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  8
// Lesson:  2 Manipuladores de Fluxo
// Date:    2023-01-30
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----  Library
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::hex;
using std::oct;
using std::dec;
using std::fixed;

#include <iomanip>
using std::setbase;
using std::setprecision;
using std::setw;

//========================================
//----  Main Function
int main()
{
//========================================
//----  BASES NUMÉRICAS DECIMAL, OCTAL E HEXADECIMAL

//----  Exemplo 1
//    int numero = 25;
//
//    cout<<"Saida hexdecimal"<<endl;
//    cout<<hex;
//    cout<<"numero = "<<numero<<endl;
//    numero = 41;
//    cout<<"numero = "<<numero<<endl;
//    numero = 100;
//    cout<<"numero = "<<numero<<endl;
//    numero = 15;
//    cout<<"numero = "<<numero<<"\n"<<endl;
//
//    cout<<"Saida Octal"<<endl;
//    cout<<oct;
//    numero = 41;
//    cout<<"numero = "<<numero<<endl;
//    numero = 100;
//    cout<<"numero = "<<numero<<endl;
//    numero = 15;
//    cout<<"numero = "<<numero<<"\n"<<endl;
//
//    cout<<"Saida Decimal"<<endl;
//    cout<<dec;
//    numero = 41;
//    cout<<"numero = "<<numero<<endl;
//    numero = 100;
//    cout<<"numero = "<<numero<<endl;
//    numero = 15;
//    cout<<"numero = "<<numero<<"\n"<<endl;


//----  Exemplo 2 usando iomanip setbase
//    int numero = 25;
//
//    cout<<setbase(16)<<"Saida hexdecimal"<<endl;
//    cout<<"numero = "<<numero<<endl;
//    numero = 41;
//    cout<<"numero = "<<numero<<endl;
//    numero = 100;
//    cout<<"numero = "<<numero<<endl;
//    numero = 15;
//    cout<<"numero = "<<numero<<"\n"<<endl;
//
//    cout<<setbase(8)<<"Saida Octal"<<endl;
//    numero = 41;
//    cout<<"numero = "<<numero<<endl;
//    numero = 100;
//    cout<<"numero = "<<numero<<endl;
//    numero = 15;
//    cout<<"numero = "<<numero<<"\n"<<endl;
//
//    cout<<setbase(10)<<"Saida Decimal"<<endl;
//    numero = 41;
//    cout<<"numero = "<<numero<<endl;
//    numero = 100;
//    cout<<"numero = "<<numero<<endl;
//    numero = 15;
//    cout<<"numero = "<<numero<<"\n"<<endl;

//========================================
//----  PRECISÃO DE PONTO FLUTUANTE
//    double val = 1.45645645645644;
//    cout << fixed;                          //utiliza notação de ponto fixo
//    cout << setprecision(4) << val << endl; //imprime com 4 casas de precisão
//
//    cout.precision(8);                      //configura para 8 casas de precisão
//    cout << val << endl;                    //imprime com 8 casas de precisão

//========================================
//----  LARGURA DE CAMPO
//    int teste = 123;
//    cout << setw(7) << teste << endl; //imprime com largura de campo igual a 7

    return 0;
}
