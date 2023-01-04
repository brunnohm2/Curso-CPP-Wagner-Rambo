//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  5
// Lesson:  2
// Date:    2022-12-19
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----  Library
#include "Memory.hpp"

//========================================
//----  Main Function
int main()
{
    char opt;
    do{
        Memory memoria1, memoria2(2);
        memoria1.listNumbers();
        memoria2.listNumbers();
        cout<<"Recarregar y para sim"<<endl;
        cin>>opt;
    }while(opt=='y');
    return 0;
}
