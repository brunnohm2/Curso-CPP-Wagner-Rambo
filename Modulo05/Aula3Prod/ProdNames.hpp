//========================================
//----  Library
#include "ProdPrice.hpp"

//========================================
//---- Class Development
#ifndef PRODNAMES
#define PRODNAMES
class ProdNames{
    public:
        ProdNames(const char * const prodName, const ProdPrice &vall);
        ~ProdNames();

        void results() const;

    private:
        char product1[20];
        const ProdPrice price1;
};
#endif
