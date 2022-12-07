//
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai
// Modulo: 3
// Aula: 4 Arrays
// Data: 2022-12-06
// IDE Code::Blocks
// Arquivo main.cpp
//
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include<iomanip>
using std::setw;         // Permite configurar a largura de um campo

int main()
{
    int teste[10], x=-9, y=9;
    teste[0]=15;

    cout<<teste[x+y]<<endl;

    cout<<"========================="<<endl;

    int a[10];
    for(int i=0; i<10; i++)
        a[i] = i+1;

    for(int i=0; i<10; i++)
        cout << setw(5) << "a[" << i << "]= "
        << setw(4) << a[i] << endl;

    cout<<"========================="<<endl;

    int b[6] = {4, 8, 15, 16, 23, 42};

    for(int i=0; i<6; i++)
        cout << setw(5) << "b[" << i << "]= "
        << setw(4) << b[i] << endl;

    cout<<"========================="<<endl;

    int c[9] = {7, 4, 1};

    for(int i=0; i<9; i++)
        cout << setw(5) << "c[" << i << "]= "
        << setw(4) << c[i] << endl;

    cout<<"========================="<<endl;

    int d[5];

    for(int i=0; i<5; i++)
        cout << setw(5) << "d[" << i << "]"
        << setw(4) << d[i] << endl;

    cout<<"========================="<<endl;

    int e[ ] = {4, 0, 9, 3};

        for(int i=0; i<4; i++)
            cout << setw(5) << "e[" << i << "]= "
            << setw(4) << e[i] << endl;

    cout<<"========================="<<endl;

    return 0;
}
