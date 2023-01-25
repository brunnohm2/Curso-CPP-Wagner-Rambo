//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  6
// Lesson:  5
// Date:    2023-01-06
// IDE:     Code::Blocks
// File:    main.cpp
//

//========================================
//----  Library
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include "Cursos.hpp"
#include "CursoProprio.hpp"
#include "CursoAfiliado.hpp"
#include "CursoCoproduzido.hpp"
#include "CursoAssinatura.hpp"

//========================================
//----  Function Prototype
void chamadaComPonteiro (const Cursos *const);

//========================================
//----  Main Function
int main()
{
    cout<<fixed<<setprecision(2); //Precisao de duas casa decimais
    CursoProprio        cursoProgramacao    ("Aprenda a Programar", "HDB3",             129.99);
    CursoAfiliado       cursoIngles         ("Ingles Completo",     "Language Inc.",    0.3,    150);
    CursoCoproduzido    cursoMecatronica    ("Construa Robos",      "WR & RW",          0.5,    220,    227.0);
    CursoAssinatura     cursoTutoriais      ("Tuto Eletronica",     "Round Robin",      37.0,   2500);
    CursoAssinatura     cursoCulinaria      ("Culinaria",           "BBQ",              55.97,  175);

    //Cria ponteiros que aponta para objetos
    CursoProprio        *cursoProgramacaoPtr    = 0;
    CursoAfiliado       *cursoInglesPtr         = 0;
    CursoCoproduzido    *cursoMecatronicaPtr    = 0;
    CursoAssinatura     *cursoTutoriaisPtr      = 0;
    CursoAssinatura     *cursoCulinariaPtr      = 0;

    //Utiliza Vinculacao estatica
    cursoProgramacao.mostraValores();
    cout<<"\n    Lucro do curso Proprio $: "<<cursoProgramacao.calculaLucro();
    cout<<endl;

    cursoIngles.mostraValores();
    cout<<"\n   Lucro do curso Afiliado $: "<<cursoIngles.calculaLucro();
    cout<<endl;

    cursoMecatronica.mostraValores();
    cout<<"\nLucro do curso CoProduzido $: "<<cursoMecatronica.calculaLucro();
    cout<<endl;

    cursoTutoriais.mostraValores();
    cout<<"\n Lucro do curso Assinatura $: "<<cursoTutoriais.calculaLucro();
    cout<<endl;

    cursoCulinaria.mostraValores();
    cout<<"\n Lucro do curso Assinatura $: "<<cursoCulinaria.calculaLucro();
    cout<<endl;

    //Ponteiro aponta para os objetos
    cursoProgramacaoPtr = &cursoProgramacao;
    cursoInglesPtr      = &cursoIngles;
    cursoMecatronicaPtr = &cursoMecatronica;
    cursoTutoriaisPtr   = &cursoTutoriais;
    cursoCulinariaPtr   = &cursoCulinaria;

    cout<<"\n===================================================================="<<endl;
    //Vinculacao dinanmica (polimorfismo)
    chamadaComPonteiro(cursoProgramacaoPtr);
    chamadaComPonteiro(cursoInglesPtr);
    chamadaComPonteiro(cursoMecatronicaPtr);
    chamadaComPonteiro(cursoTutoriaisPtr);
    chamadaComPonteiro(cursoCulinariaPtr);
    return 0;
}
//========================================
//----  Function Development
void chamadaComPonteiro (const Cursos * const classeBasicaPtr)
{
    classeBasicaPtr->mostraValores();
    cout<<"\n            Lucro do Curso $: "<<classeBasicaPtr->calculaLucro()<<endl;
}
