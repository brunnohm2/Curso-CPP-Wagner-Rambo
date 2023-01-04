//========================================
//---- Class Development (Member-Function)
#include "HipoCalc.hpp"
HipoCalc::HipoCalc(double legA, double legB):
_legA(legA),
_legB(legB)
{
    hypotenuse = pythagoras(_legA, _legB);
}
HipoCalc::~HipoCalc()
{

}
double HipoCalc::pythagoras(double legA, double legB)
{
    return sqrt(pow(legA, 2)+pow(legB, 2));
}
void HipoCalc::rectangularTriangle() const
{
    cout<<"        hipo = "<<hypotenuse<<endl;
    cout<<"  this->hipo = "<<this->hypotenuse<<endl;
    cout<<"(*this).hipo = "<<(*this).hypotenuse<<endl;

}
