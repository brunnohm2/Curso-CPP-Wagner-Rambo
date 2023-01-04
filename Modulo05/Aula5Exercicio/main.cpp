//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  5
// Lesson:  5 Membros da Classe Static
// Date:    2023-01-04
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----  Library
#include "LevelSensor.hpp"

//========================================
//----  Main Function
int main()
{
    int levelH2O;
    LevelSensor sensor1(1), sensor2(2), sensor3(3), sensor4(4);
    do{
        cout<<"Digite um valor de 0 a 100: ";
        cin>>levelH2O;
        LevelSensor::setLevelSensor(levelH2O);
        sensor1.messageSensor();
        sensor2.messageSensor();
        sensor3.messageSensor();
        sensor4.messageSensor();
    }while(1);

    return 0;
}
