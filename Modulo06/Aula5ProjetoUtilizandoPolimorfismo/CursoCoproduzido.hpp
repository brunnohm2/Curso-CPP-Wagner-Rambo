
//========================================
//---- Class Development
#ifndef CURSOCOPRODUZIDO
#define CURSOCOPRODUZIDO
//==================================
//---- Library
#include "CursoAfiliado.hpp"

class CursoCoproduzido :public CursoAfiliado
{
    public:
        CursoCoproduzido(const string &curso, const string &empresa, double taxa=0.0, int quantidade=0, double valorFixo=0.0);
        ~CursoCoproduzido();

        void            setValorFixo(double valorFixo);
        double          getValorFixo()  const;

        virtual double  calculaLucro()  const;
        virtual void    mostraValores() const;
    private:
        double          cursoValorFixo;
};
#endif

