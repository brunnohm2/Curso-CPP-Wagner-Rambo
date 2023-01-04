//==================================
//---- Library
#include <iostream>         // Biblioteca padrao de entrada e saida de dados
using std::endl;            // Linha nova
using std::cout;            // Imprime dados
using std::cin;             // Obtem dados inseridos na tela

//========================================
//---- Class Development
#ifndef LEVELSENSOR
#define LEVELSENSOR
class LevelSensor
{
    public:
        LevelSensor(int);
        ~LevelSensor();
        static void setLevelSensor(int);
        void messageSensor();
        void statusSensor();
        void getSensorID();
    private:
        static int  _levelSensor;
        const int   _idSensor;
};
#endif

