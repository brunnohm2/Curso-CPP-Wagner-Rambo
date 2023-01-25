//========================================
//---- Class Development (Member-Function)
#include "Config.hpp"
Config::Config(int val):
_val(val)
{}
void    Config::operator=   (int newVal)    {_val = newVal;}
int     Config::getVal()    const           {return _val;}
void    Config::printVal()  const           {cout<<"\nVal = "<<getVal()<<endl;}
