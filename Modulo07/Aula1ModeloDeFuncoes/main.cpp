//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  7
// Lesson:  1 Modelos de Funções Templantes
// Date:    2023-01-06
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----  Library
#include <iostream>
using std::cout;
using std::endl;

//========================================
//----  Function Prototype

template    <typename newType>
void criptografaArray(newType *myArray, int arraySize);

//========================================
//----  Main Function
int main()
{
    const int   arraySize       = 5;
    int         a1[arraySize]   = {1,   2,   3,   4,   5  };
    double      a2[arraySize]   = {1.1, 2.2, 3.3, 4.4, 5.5};
    char        a3[arraySize]   = {'A', 'B', 'C', 'D', 'E'};

    criptografaArray(a1, arraySize);
    criptografaArray(a2, arraySize);
    criptografaArray(a3, arraySize);

    return 0;
}
//========================================
//----  Function Development
template    <typename newType>
void criptografaArray(newType *myArray, int arraySize)
{
    for(int i=0; i<arraySize; i++)
    {
        if(i%2) myArray[i] = myArray[i] + 5;
        else    myArray[i] = myArray[i] + 3;
    }
    for(int i=0; i<arraySize; i++)  cout<<myArray[i]<<' ';
    cout<<endl;
}
