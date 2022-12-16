//
// Curso: C++, Curso Completo
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai
// Modulo: 4
// Aula: 4 Exercicio
// Data: 2022-12-15
// IDE Code::Blocks
// Arquivo main.cpp
//

//==================================
// Bibliotecas
 #include <iostream>         // Biblioteca padrao de entrada e saida de dados
 using std::endl;            // Linha nova
 using std::cout;            // Saida de dados
 using std::cin;             // Entrada de dados

 #include <cmath>            // Biblioteca Funcoes gerais para calculos matematicos
 using std::pow;             // Calcula a potencia de um numero Ex.: pow(3, 4) 3 elevado a 4
 using std::sqrt;            // Calcula a raiz quadrada         Ex.: sqrt(4) calcula raiz quadrada de 4

//==================================
// Prototipo de Funcoes
double quadrado(int, char &);
double cubo(int, char &);
double raiz(int, char &);
void calc(double(*)(int, char &), int);
//==================================
// Funcao principal
int main()
{
    calc(quadrado, 5);
    calc(cubo, 5);
    calc(raiz, 27);
    return 0;
}
//==================================
// Desenvolvimento das Funcoes
//Quadrado
double quadrado(int a, char &sym){
    sym = 'q';
    return pow(a,2);
}
//Cubo
double cubo(int a, char &sym){
    sym = 'c';
    return pow(a,3);
}
//Raiz Quadrada
double raiz(int a, char &sym){
    sym = 'r';
    return sqrt(a);
}
//Calculo
void calc(double(*operador)(int, char &), int valor){
    char sym = '.';
    double res = (*operador)(valor, sym);
    cout << "Resultado do " << sym << " de " << valor << " = " << res << endl;

}
