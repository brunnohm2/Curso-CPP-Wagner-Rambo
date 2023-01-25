//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  6
// Lesson:  1 Classes Básicas e Derivadas
// Date:    2023-01-04
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----  Library
#include "sensVolt.hpp"

//========================================
//----  Main Function
int main()
{
    sensVolt sensor("Voltage", 267, 1, 5.0);
    cout << fixed << setprecision (4);

    cout << "Configuracoes iniciais: "<<endl;
    sensor.dispResults();
    cout << "Voltage = " << sensor.voltsVal()<<'V'<<endl;


    cout << "\nNovas configuracoes: "<<endl;
    sensor.setSensID(4);
    sensor.setValorADC(743);
    sensor.setSensType("Pressao");
    sensor.setVref(3.3);
    sensor.dispResults();
    cout << "Voltage = " << sensor.voltsVal()<<'V'<<endl;
    return 0;
}
