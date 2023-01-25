//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  6
// Lesson:  3 Classes Básicas e Derivadas Current
// Date:    2023-01-05
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
    cout << fixed << setprecision (4);
    sensCurrent sensorA("Current", 850, 2, 5.0, 500.0);
    sensCurrent sensorB("Temperatura", 741, 3, 4.2, 1500.0);
    cout<<"==========================================="<<endl;
    cout<<"Corrente SensorA= "<<sensorA.currentVal()<<" mA"<<endl;
    cout<<"Tensao   SensorA= "<<sensorA.voltsVal()<<" V"<<endl;
    sensorA.dispResults();
    cout<<"==========================================="<<endl;
    cout<<"Corrente SensorB= "<<sensorB.currentVal()*150.0<<" graus Celsius"<<endl;
    sensorB.dispResults();
    cout<<"==========================================="<<endl;

    {
        sensCurrent sensorC("Pressao", 547, 8, 4.7, 9500.0);
        sensorC.dispResults();
    }
    return 0;
}
