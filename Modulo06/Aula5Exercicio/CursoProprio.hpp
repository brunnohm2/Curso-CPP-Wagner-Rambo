//========================================
//---- Class Development

#ifndef CURSOPROPRIO
#define CURSOPROPRIO

//========================================
//---- Library
#include "Cursos.hpp"

class CursoProprio : public Cursos
{
    public:
        CursoProprio(const string &curso, const string &empresa, double valor=0.0);
        ~CursoProprio();

        void            setValorCurso   (double valor);
        double          getValorCurso   ()const;

        virtual double  calculaLucro    ()  const;
        virtual void    mostraValores   ()  const;
    private:
        double valorCurso;
};
#endif

