//========================================
//---- Class Development (Member-Function)
#include "ProdPrice.hpp"
ProdPrice::ProdPrice(int p1):
price1(p1)
{

}
ProdPrice::~ProdPrice(){

}
int ProdPrice::printPrice() const
{
    return price1;
}
