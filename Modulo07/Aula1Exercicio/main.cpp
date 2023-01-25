//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  7
// Lesson:  1 Exercicio
// Date:    2023-01-06
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----  Library
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

//========================================
//----  Function Prototype
template    <typename newType>
void        descriptografica    (newType *myArray, int arraySize);

//========================================
//----  Main Function
int main()
{
    int     arraySize   = 5;
    char    tipo;
    int     nt      [arraySize];
    double  ouble   [arraySize];
    char    har     [arraySize];


    do{
    cout<<"Entre com o tipo do array:"
        <<"\n- (i)nt"
        <<"\n- (d)ouble"
        <<"\n- (c)har"
        <<"\n>>>";
    cin>>tipo;
    if(tipo == 'i')
    {
        for(int i=0; i<arraySize; i++)
        {
            cout<<"Entre com o array["<<i<<"]: ";
            cin>>nt[i];
        }
        descriptografica(nt, arraySize);
    }
    else if(tipo == 'd')
    {
        for(int i=0; i<arraySize; i++)
        {
            cout<<"Entre com o array["<<i<<"]: ";
            cin>>ouble[i];
        }
        descriptografica(ouble, arraySize);
    }
    else if(tipo == 'c')
    {
        for(int i=0; i<arraySize; i++)
        {
            cout<<"Entre com o array["<<i<<"]: ";
            cin>>har[i];
        }
        descriptografica(har, arraySize);
    }
    }while(tipo != 'x');

    return 0;
}

//========================================
//----  Function Development
template    <typename newType>
void        descriptografica(newType *myArray, int arraySize)
{
    for(int i=0; i<arraySize; i++)
    {
        if(i%2) myArray[i] = myArray[i] - 5;
        else    myArray[i] = myArray[i] - 3;
    }
    for(int i=0; i<arraySize; i++)  cout<<myArray[i]<<' ';
    cout<<endl;
}
