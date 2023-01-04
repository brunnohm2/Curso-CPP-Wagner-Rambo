//========================================
//---- Class Development (Member-Function)
#include "Exemplo1.hpp"
#include "Exemplo2.hpp"
Exemplo2::Exemplo2():
x2 (10.0)
{

}
Exemplo2::~Exemplo2()
{

}
double Exemplo2::mix()
{
    Exemplo1 op1;

    return sin(op1.x1)*sin(x2);
}
