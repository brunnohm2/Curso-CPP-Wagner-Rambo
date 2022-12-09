 //
 // Curso: C++, Curso Completo
 // Professor: Wagner Rambo
 // Aluno: Brunno Hiroshy Murai
 // Modulo: 3
 // Aula: 4 Exercicio
 // Data: 2022-12-09
 // IDE Code::Blocks
 // Arquivo Decrescente.hpp
 //

 #include <iostream>         // Biblioteca padrao de entrada e saida de dados
 using std::endl;            // Linha nova
 using std::cout;            // Saida de dados
 using std::cin;             // Entrada de dados

 #include <iomanip>          // Biblioteca Manipuladores de fluxo parametrizados
 using std::setw;            // Permite configurar a largura de um campo

 class Decrescente{
    public:
        Decrescente();
        void armazenaValores();
        void ordenaValores();
        void buscaValores(int);

    private:
        static const int numero_posicoes=5;
        int meuArray[numero_posicoes]={0};
 };
