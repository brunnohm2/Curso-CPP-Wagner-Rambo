//==================================
//---- Library
#include "DadosPessoais.hpp"

//========================================
//---- Class Development
#ifndef RG
#define RG
class Rg:public DadosPessoais
{
    public:
        Rg(const string firstName, const string lastName, int birthYear, int birthMonth, int birthDay, int RGNumber, int RGSuffix);
        ~Rg();

        void    setRGNumber(int RGNumber);
        int     getRGNumber() const;

        void    setRGSuffix(int RGSuffix);
        int     getRGSuffix() const;

        void    getRG() const;
        void    getPersonalData() const;

    private:
        int _RGNumber;
        int _RGSuffix;
};
#endif

