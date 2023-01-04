//========================================
//---- Class Development (Member-Function)
#include "sensCurrent.hpp"
//---- Constructor ----
sensCurrent::sensCurrent(const string &sensType, int valorADC, unsigned sensID, double Vref, double Res)
{
    _sensType   = sensType;
    _valorADC   = valorADC;
    _sensID     = sensID;
    _Vref       = Vref;
    _Res        = Res;
}

//---- Destructor ----
sensCurrent::~sensCurrent()
{

}

//----
void sensCurrent::setSensType (const string &sensType)
{
    _sensType = sensType;
}

//----
string sensCurrent::getSensType ()const
{
    return _sensType;
}

//----
void sensCurrent::setValorADC (int valorADC)
{
    _valorADC = (valorADC >= 0 && valorADC < 1024) ? valorADC : 512;
}

//----
int sensCurrent::getValorADC ()const
{
    return _valorADC;
}

//----
void sensCurrent::setSensID (unsigned sensID)
{
    _sensID = sensID;
}

//----
unsigned sensCurrent::getSensID ()const
{
    return _sensID;
}

//----
void sensCurrent::setVref (double Vref)
{
    _Vref = Vref;
}

//----
double sensCurrent::getVref ()const
{
    return _Vref;
}
//----
void sensCurrent::setRes(double Res)
{
    _Res = Res;
}
//----
double sensCurrent::getRes() const
{
    return _Res;
}
//----
double sensCurrent::currentVal ()const
{
    double voltage = _valorADC*_Vref/static_cast<double>(1024);
    return voltage/_Res*1000.0;
}

//----
void sensCurrent::dispResults ()const
{
    cout<<"\nTipo do Sensor = "<<_sensType
        <<"\nValor do ADC   = "<<_valorADC
        <<"\nID do Sensor   = "<<_sensID
        <<"\nTensão de Ref. = "<<_Vref
        <<"\nResistor       = "<<_Res
        <<endl;
}
