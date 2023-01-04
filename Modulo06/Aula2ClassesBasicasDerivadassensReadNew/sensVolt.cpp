//========================================
//---- Class Development (Member-Function)
#include "sensVolt.hpp"
//---- Constructor ----
sensVolt::sensVolt(const string &sensType, int valorADC, unsigned sensID, double Vref):
_sensType   (sensType),
_valorADC   (valorADC),
_sensID     (sensID),
_Vref       (Vref)
{}

//---- Destructor ----
sensVolt::~sensVolt()
{

}

//----
void sensVolt::setSensType (const string &sensType)
{
    _sensType = sensType;
}

//----
string sensVolt::getSensType ()const
{
    return _sensType;
}

//----
void sensVolt::setValorADC (int valorADC)
{
    _valorADC = (valorADC >= 0 && valorADC < 1024) ? valorADC : 512;
}

//----
int sensVolt::getValorADC ()const
{
    return _valorADC;
}

//----
void sensVolt::setSensID (unsigned sensID)
{
    _sensID = sensID;
}

//----
unsigned sensVolt::getSensID ()const
{
    return _sensID;
}

//----
void sensVolt::setVref (double Vref)
{
    _Vref = Vref;
}

//----
double sensVolt::getVref ()const
{
    return _Vref;
}

//----
double sensVolt::voltsVal ()const
{
    return getValorADC()*getVref()/static_cast<double>(1024);
}

//----
void sensVolt::dispResults ()const
{
    cout<<"\nTipo do Sensor = "<<getSensType()
        <<"\nValor do ADC   = "<<getValorADC()
        <<"\nID do Sensor   = "<<getSensID()
        <<"\nTensão de Ref. = "<<getVref() << endl;
}
