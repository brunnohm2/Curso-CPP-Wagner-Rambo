//========================================
//----  Library
#include <cstring>
using std::strlen;
using std::strncpy;

#include "ProdNames.hpp"
//========================================
//---- Class Development (Member-Function)
ProdNames::ProdNames(const char * const prodName, const ProdPrice &val1):
price1 (val1)
{
    int length;
    length              = strlen(prodName);
    length              = (length<20 ? length : 19);
    strncpy(product1, prodName, length);
    product1 [length]   = '\0';
}
ProdNames::~ProdNames()
{

}
void ProdNames::results() const
{
    cout << product1 << " tem valor igual a "<<price1.printPrice()<<endl;
}
