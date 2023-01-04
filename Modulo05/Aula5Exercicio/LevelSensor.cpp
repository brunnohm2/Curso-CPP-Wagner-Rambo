//========================================
//---- Class Development (Member-Function)
#include "LevelSensor.hpp"

//----  Initializing Static Var
int LevelSensor::_levelSensor = 0;

LevelSensor::LevelSensor(int idSensor):
_idSensor (idSensor)
{

}
LevelSensor::~LevelSensor()
{

}
void LevelSensor::setLevelSensor(int newLevel)
{
    _levelSensor = newLevel;
}
void LevelSensor::messageSensor()
{
    getSensorID();
    statusSensor();
}
void LevelSensor::statusSensor()
{
    cout<<"Nível da água ";
    if(_levelSensor <  20)                          cout<<"muito baixo!"<<endl;
    if(_levelSensor >= 20 && _levelSensor <=100)    cout<<"OK"<<endl;
    if(_levelSensor >  100)                        {cout<<"OK"<<endl; _levelSensor = 50;}
}
void LevelSensor::getSensorID()
{
    cout<<"Sensor ID = "<<_idSensor<<endl;
}
