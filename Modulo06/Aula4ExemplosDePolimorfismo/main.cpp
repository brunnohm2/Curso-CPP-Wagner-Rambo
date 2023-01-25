//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  6
// Lesson:  4 Exemplos de Polimorfismo
// Date:    2023-01-05
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----  Library
#include "sensVolt.hpp"
#include "sensCurrent.hpp"
//========================================
//----  Main Function
int main()
{
    sensVolt  sensorA("Tensao", 521, 1, 3.3);
    sensVolt *sensorAPtr = 0;

    sensCurrent  sensorB("Corrente", 421, 2, 5.0, 10000.0);
    sensCurrent *sensorBPtr = 0;

    cout<<"===================================="<<endl;
    sensorAPtr = &sensorA;
    sensorAPtr->dispResults();

    cout<<"===================================="<<endl;
    sensorBPtr = &sensorB;
    sensorBPtr->dispResults();

    cout<<"===================================="<<endl;
    sensorAPtr = &sensorB;
    sensorAPtr->dispResults();

    cout<<"===================================="<<endl;
    return 0;
}
