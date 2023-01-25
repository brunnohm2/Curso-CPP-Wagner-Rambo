//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  6
// Lesson:  2 Classes Básicas e Derivadas Current
// Date:    2023-01-04
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----  Library
#include "sensCurrent.hpp"

//========================================
//----  Main Function
int main()
{
    sensCurrent sensor("Current", 850, 2, 5.0, 500.0);
    cout << fixed << setprecision (4);

    sensor.dispResults();

    cout<<"Current = "<<sensor.currentVal()<<"mA"<<endl;

    sensor.setValorADC(367);
    sensor.setVref(3.3);
    sensor.setRes(1000.0);

    sensor.dispResults();
    cout<<"Current = "<<sensor.currentVal()<<"mA"<<endl;
    return 0;
}
