//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  5
// Lesson:  4
// Date:    2022-12-28
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----  Library
#include "Adjusts.hpp"

//========================================
//----  Main Function
int main()
{
    Adjusts user1, user2, user3, user4(85);
    cout << "==============================================================" << endl;
    cout << "User 1" << endl;
    user1.setVolume(3).setBrightness(12).setContrast(80);
    user1.displayParameter();

    cout << "==============================================================" << endl;
    cout << "User 2" << endl;
    user2.setVolume(15).setBrightness(90).setContrast(66);
    user2.displayParameter();

    cout << "==============================================================" << endl;
    cout << "User 3" << endl;
    user3.setVolume(680).setBrightness(44).setContrast(25);
    user3.displayParameter();

    cout << "==============================================================" << endl;
    cout << "User 4" << endl;
    user4.displayParameter();

    return 0;
}
