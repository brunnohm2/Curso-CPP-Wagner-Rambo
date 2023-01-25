//========================================
//---- Class Development (Member-Function)
#include "sensCurrent.hpp"
//---- Constructor ----
sensCurrent::sensCurrent(const string &sensType, int valorADC, unsigned sensID, double Vref, double Res):
sensVolt(sensType, valorADC, sensID, Vref)
{
    setRes(Res);
    cout<<"Contrutor SensCurrent"<<endl;
}
//---- Destructor ----
sensCurrent::~sensCurrent()             {cout<<"Destrutor SensCurrent"<<endl;}
//----
void sensCurrent::setRes(double Res)    {_Res = Res;}
//----
double sensCurrent::getRes() const      {return _Res;}
//----
double sensCurrent::currentVal () const {return sensVolt::voltsVal()/getRes()*1000.0;}
//----
void sensCurrent::dispResults ()const
{
    sensVolt::dispResults();
    cout<<"Resistor       = "<<getRes()
        <<endl;
}
