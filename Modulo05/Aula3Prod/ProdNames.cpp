//========================================
//----  Library
#include <cstring>
using std::strlen;
using std::strncpy;

#include "ProdNames.hpp"
//========================================
//---- Class Development (Member-Function)
ProdNames::ProdNames(const char * const prodName1, const ProdPrice &vall):
price1 (vall)
{
    int length;
    length              = strlen(prodName1);
    length              = (length<20 ? length : 19);
    strncpy(product1, prodName1, length);
    product1 [length]   = '\0';
}
ProdNames::~ProdNames()
{

}
void ProdNames::results() const
{
    cout << product1 << " tem valor igual a "<<price1.printPrice()<<endl;
}
