//
// Curso: C++, Curso Completo
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai// Curso: C++, Curso Completo
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai
// Modulo: 2
// Aula: 2
// Data: 2022-12-03
// IDE Code::Blocks
// Arquivo JurosCompostos.hpp contendo as seções pública e privada, construtor,
//                        funções-membro e membros de dados genéricos
//

//=========================================================
//--------Bibliotecas--------
#include <iostream>
    using std::endl;
    using std::cout;
    using std::cin;
    using std::fixed;           // Garante que as casas depois da virgula sejam exibidas

#include <string>
    using std::string;

#include <iomanip>
    using std::setprecision;
    using std::setw;            // Permite configurar a largura de um campo

#include <cmath>
    using std::pow;             // Calcula a potencia de um numero

//=========================================================
//--------Desenvolvimento da Classe--------
class JurosCompostos{
    public:
        JurosCompostos(string);
        void welcome();
        void calcJurosCompostos();

    private:
        string getTitle;

}; //End JurosCompostos
