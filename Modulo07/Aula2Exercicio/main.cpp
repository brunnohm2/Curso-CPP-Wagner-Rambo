//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  7
// Lesson:  2 Exercicio
// Date:    2023-01-08
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----  Library
#include "DeslocaArray.hpp"

//========================================
//----  Main Function
int main()
{
    const unsigned short a1Size = 4;
    const unsigned short a2Size = 6;

    DeslocaArray<char, a1Size>  a1;
    DeslocaArray<int,  a2Size>  a2;

    char newArrai1[a1Size] = {'d', 'g', 'f', 'h'};
    int  newArrai2[a2Size] = {25 ,  31,  35,  74, 89, 55};

    a1.shiftArray(newArrai1);
    a2.shiftArray(newArrai2);

    a1.printArray();
    a2.printArray();
    return 0;
}
