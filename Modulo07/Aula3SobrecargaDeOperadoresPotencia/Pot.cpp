//========================================
//---- Class Development (Member-Function)
#include "Pot.hpp"
Pot::Pot(int base):
_base (base)
{}
int     Pot::operator^  (int expoente)  {return pow(_base, expoente);}
void    Pot::setBase   (int base)      {_base = base;}
