//========================================
//---- Class Development
#ifndef CURSOASSINATURA
#define CURSOASSINATURA
//========================================
//----  Library
#include "Cursos.hpp"
class CursoAssinatura : public Cursos
{
    public:
        CursoAssinatura(const string &curso, const string &empresa, double valorAssinatura, int quantidadeAssinatura);
        ~CursoAssinatura();

        void            setValorAssinatura      (double valorAssinatura);
        double          getValorAssinatura      ()  const;

        void            setQuantidadeAssinatura (int quantidadeAssinatura);
        int             getQuantidadeAssinatura ()  const;

        virtual double  calculaLucro()  const;
        virtual void    mostraValores() const;
    private:
        double  _valorAssinatura;
        int     _quantidadeAssinatura;
};
#endif

