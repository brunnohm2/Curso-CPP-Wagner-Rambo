#include "Config.hpp"

//========================================
//---- Class Development (Member-Function)

//---- Construtor
Config::Config(int val):
_val(val)
{}

//---- Sobrecarga de oparador =
void Config::operator=(int newVal)
{
  _val = newVal;
}

//---- getVal
int Config::getVal()const
{
  return _val;
}

//---- printVal
void Config::printVal()const
{
  cout<<"\nVal = "<<getVal()<<endl;
}
