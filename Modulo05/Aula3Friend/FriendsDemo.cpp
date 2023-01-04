//========================================
//---- Class Development (Member-Function)
#include "FriendsDemo.hpp"
FriendsDemo::FriendsDemo():
f(0.00)
{

}
FriendsDemo::~FriendsDemo()
{

}
void FriendsDemo::result()
{
    cout<<" 555 freq = "<<f<<" Hz "<< endl;
}
void calcFreq(FriendsDemo &ne555, double Ra, double Rb, double C)
{
    ne555.f = 1.44/((Ra+2*Rb)*C);
}
