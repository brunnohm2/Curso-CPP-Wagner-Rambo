//========================================
//----  Library
#include "ProdPrice.hpp"

//========================================
//---- Class Development
#ifndef PRODNAMES
#define PRODNAMES
class ProdNames{
    public:
        ProdNames(const char * const, const ProdPrice &);
        void results() const;
        ~ProdNames();
    private:
        char product1[20];
        const ProdPrice price1;
};
#endif
