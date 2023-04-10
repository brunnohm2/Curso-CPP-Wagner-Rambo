#include "FriendsDemo.hpp"

//========================================
//---- Class Development (Member-Function)

//---- Construtor
FriendsDemo::FriendsDemo():
f(0.00)
{}

//---- Destrutor
FriendsDemo::~FriendsDemo(){}

//---- Result
void FriendsDemo::result()
{
  cout<<" 555 freq = "<<f<<" Hz "<< endl;
}

//---- Funcao Friend calcFreq
void calcFreq(FriendsDemo &ne555, double Ra, double Rb, double C)
{
  ne555.f = 1.44/((Ra+2*Rb)*C);
}
