#include <iostream>             // Biblioteca padrao de entrada e saida de dados
    using std::endl;            // Linha nova
    using std::cout;            // Saida de dados
    using std::cin;             // Entrada de dados
    using std::fixed;           // Garante que as casas decimais depois da virgula sejam exibidas
    using std::left;            // Justifica o texto a esquerda
    using std::right;           // Justifica o texto a direita

#include <string>               // Biblioteca Classe de string no padrao C++
    using std::string;          // Permite o uso de strings

#include <iomanip>              // Biblioteca Manipuladores de fluxo parametrizados
    using std::setprecision;    // Precisao para saida numerica
    using std::setw;            // Permite configurar a largura de um campo

#include <cmath>                // Biblioteca Funcoes gerais para calculos matematicos
    using std::pow;             // Calcula a potencia de um numero Ex.: pow(3, 4) 3 elevado a 4
    using std::sqrt;            // Calcula a raiz quadrada         Ex.: sqrt(4) calcula raiz quadrada de 4

#include <cstdlib>              // Gerenciamento dinâmico de memória, geração de números aleatórios, comunicação com o ambiente, aritmética de inteiros, pesquisa, classificação e conversão.
    using std::rand;            // Faz o sorteio de numeros aleatorios Ex.: linha=rand()%13 retorna aleatorios de ate o valor 13
    using std::srand;           // Insere uma semente para conseguir numeros aleatorios Ex.: srand(time(0))

#include <ctime>                // Biblioteca para gerenciamento de tempo
    using std::time;            // Retorna o tempo decorrido desde 00:00 de 1 Janeiro de 1970;

class menuSistema{
    public:
        menuSistema();
        void gerenciadorMenu();
        void espandeMenu();
        const char *menuPrincipal[4]        {"[1] - Temperatura",
                                             "[2] - Umidade",
                                             "[3] - Ajuda",
                                             "[4] - Sair"};
    private:
//==============================================================
            const char *menuTemperatura[4]         {"[1] - Dia",
                                                    "[2] - Semana",
                                                    "[3] - Mes",
                                                    "[4] - Voltar"};
                const char *menuTemperaturaDia[3]      {"[1] - Temperatura detalhada",
                                                        "[2] - Temperatura resumida",
                                                        "[3] - Voltar"};
                const char *menuTemperaturaSemana[3]   {"[1] - Temperatura detalhada",
                                                        "[2] - Temperatura resumida",
                                                        "[3] - Voltar"};
                const char *menuTemperaturaMes[3]      {"[1] - Temperatura detalhada",
                                                        "[2] - Temperatura resumida",
                                                        "[3] - Voltar"};
//==============================================================
            const char *menuUmidade[4]             {"[1] - Dia",
                                                    "[2] - Semana",
                                                    "[3] - Mes",
                                                    "[4] - Voltar"};
                const char *menuUmidadeDia[3]          {"[1] - Temperatura detalhada",
                                                        "[2] - Temperatura resumida",
                                                        "[3] - Voltar"};
                const char *menuUmidadeSemana[3]       {"[1] - Temperatura detalhada",
                                                        "[2] - Temperatura resumida",
                                                        "[3] - Voltar"};
                const char *menuUmidadeMes[3]          {"[1] - Temperatura detalhada",
                                                        "[2] - Temperatura resumida",
                                                        "[3] - Voltar"};
//==============================================================
            const char *menuAjuda[4]               {"[1] - Manual de Funcoes",
                                                    "[2] - Manual de Plantas",
                                                    "[3] - Manual de Irrigacao",
                                                    "[4] - Sair"};
                const char *menuAjudaFuncoes[3]        {"[1] - Manual de Funcoes",
                                                        "[2] - Manual de Plantas",
                                                        "[3] - Sair"};
                const char *menuAjudaPlantas[3]        {"[1] - Manual de Funcoes",
                                                        "[2] - Manual de Plantas",
                                                        "[3] - Sair"};
                const char *menuAjudaIrrigacao[3]      {"[1] - Manual de Funcoes",
                                                        "[2] - Manual de Plantas",
                                                        "[3] - Sair"};

};
