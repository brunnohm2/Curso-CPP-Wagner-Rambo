//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  4
// Lesson:  4
// Date:    2022-12-17
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----  Class Include
#include "Token.hpp"

//========================================
//----  Main Function
int main(){
    Token token;
    token.changeSerial();
    token.serialView();
    token.accessSystem();
    if(token.openSystem()==true){
        token.serialBlockView();
    }
    return 0;
}
