//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  6
// Lesson:  5
// Date:    2023-01-05
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

//========================================
//----  Function Prototype
void chamadaComPonteiro (const Cursos *const);

//========================================
//----  Main Function
int main()
{
    cout<<fixed<<setprecision(2); //Precisao de duas casa decimais
    CursoProprio        cursoProgramacao    ("Aprenda a Programar", "HDB3", 129.99);
    CursoAfiliado       cursoIngles         ("Ingles Completo", "Language Inc.", 0.3, 150);
    CursoCoproduzido    cursoMecatronica    ("Construa Robos", "WR & RW", 0.5, 220, 227.0);

    //Cria ponteiros que aponta para objetos
    CursoProprio        *cursoProgramacaoPtr    = 0;
    CursoAfiliado       *cursoInglesPtr         = 0;
    CursoCoproduzido    *cursoMecatronicaPtr    = 0;

    //Utiliza Vinculacao estatica
    cursoProgramacao.mostraValores();
    cout<<"\n Lucro do curso Proprio $: "<<cursoProgramacao.calculaLucro();
    cout<<endl;

    cursoIngles.mostraValores();
    cout<<"\n Lucro do curso Proprio $: "<<cursoIngles.calculaLucro();
    cout<<endl;

    cursoMecatronica.mostraValores();
    cout<<"\nLucro do curso Afiliado $: "<<cursoMecatronica.calculaLucro();
    cout<<endl;

    //Ponteiro aponta para os objetos
    cursoProgramacaoPtr = &cursoProgramacao;
    cursoInglesPtr      = &cursoIngles;
    cursoMecatronicaPtr = &cursoMecatronica;

    cout<<"\n===================================================================="<<endl;
    //Vinculacao dinanmica (polimorfismo)
    chamadaComPonteiro(cursoProgramacaoPtr);
    chamadaComPonteiro(cursoInglesPtr);
    chamadaComPonteiro(cursoMecatronicaPtr);
    return 0;
}
//========================================
//----  Function Development
void chamadaComPonteiro (const Cursos * const classeBasicaPtr)
{
    classeBasicaPtr->mostraValores();
    cout<<"\n         Lucro do Curso $: "<<classeBasicaPtr->calculaLucro()<<endl;
}
