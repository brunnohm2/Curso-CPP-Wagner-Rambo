//========================================
//---- Class Development
#ifndef CURSOSAFILIADO
#define CURSOSAFILIADO

//========================================
//----  Library
#include "Cursos.hpp"

class CursoAfiliado : public Cursos
{
    public:
        CursoAfiliado(const string &curso, const string &empresa, double taxa=0.0, int quantidade=0);
        ~CursoAfiliado();

        void            setTaxa(double taxa);
        double          getTaxa()       const;

        void            setQuantidade(int quantidade);
        int             getQuantidade() const;

        virtual double  calculaLucro()  const;
        virtual void    mostraValores() const;

    private:
        double          taxaPercent;
        int             quantidadeVendas;
};
#endif

