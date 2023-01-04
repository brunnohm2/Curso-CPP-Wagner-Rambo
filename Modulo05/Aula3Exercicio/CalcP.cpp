//========================================
//---- Class Development (Member-Function)
#include "CalcP.hpp"
CalcP::CalcP():
potencia (0)
{

}
CalcP::~CalcP()
{

}
void CalcP::printP()
{
    cout<<potencia<<" W "<<endl;
}
void potVal(CalcP &PowerSupply, double tensao, double corrente){
    PowerSupply.potencia = tensao*corrente;
}
