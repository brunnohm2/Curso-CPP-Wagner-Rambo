//
// Curso: C++, Curso Completo
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai
// Modulo: 2
// Aula: 4
// Data: 2022-12-04
// IDE Code::Blocks
// Arquivo Calculadora.hpp contendo as seções pública e privada, construtor,
//                        funções-membro e membros de dados genéricos


//=========================================================
//--------Bibliotecas--------
#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;
    using std::fixed;

#include <string>
    using std::string;

#include <iomanip>
    using std::setprecision;
    using std::setw;            // Permite configurar a largura de um campo

#include <cmath>
    using std::pow;             // Calcula a potencia de um numero

class Calculadora{
    public:
        Calculadora(string);
        void getTitle(string);
        void operacoes();
        void somar();
        void subtrair();
        void multiplicar();
        void dividir();
        void potencializar();

    private:
        string calculadoraTitle;
        double operadorA, operadorB;
};
