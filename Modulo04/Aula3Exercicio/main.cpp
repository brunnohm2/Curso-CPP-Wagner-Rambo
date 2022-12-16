//
// Curso: C++, Curso Completo
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai
// Modulo: 4
// Aula: 3
// Data: 2022-12-15
// IDE Code::Blocks
// Arquivo main.cpp
// - Utilizando arrays de ponteiros, desenvolva um sistema de menus simples em C++, que apresenta 4 opções ao usuário, sendo a quarta opção a saída do programa.
// - O menu 1 deve conter 2 submenus e mais opção de retorno ao menu principal.
// - O menu 2 deve conter 3 submenus e mais opção de retorno ao menu principal.
// - O menu 3 pode ser um help que apresente um site para consulta.
//
#include <iostream>         // Biblioteca padrao de entrada e saida de dados
    using std::endl;            // Linha nova
    using std::cout;            // Saida de dados
    using std::cin;             // Entrada de dados

#include <string>           // Biblioteca Classe de string no padrao C++
    using std::string;          // Permite o uso de strings

const char *menuPrincipal[4]        {"[1] - Temperatura",
                                     "[2] - Umidade",
                                     "[3] - Ajuda",
                                     "[4] - Sair"};
            const char *menuTemperatura[4]         {"[1] - Temperatura Diaria",
                                                    "[2] - Temperatura Semanal",
                                                    "[3] - Temperatura Mensal",
                                                    "[4] - Voltar"};
                const char *menuTemperaturaDia[3]      {"[1] - Temperatura detalhada Diaria",
                                                        "[2] - Temperatura resumida Diaria",
                                                        "[3] - Voltar"};
                const char *menuTemperaturaSemana[3]   {"[1] - Temperatura detalhada Semanal",
                                                        "[2] - Temperatura resumida Semanal",
                                                        "[3] - Voltar"};
                const char *menuTemperaturaMes[3]      {"[1] - Temperatura detalhada Mensal",
                                                        "[2] - Temperatura resumida Mensal",
                                                        "[3] - Voltar"};
            const char *menuUmidade[4]             {"[1] - Dia",
                                                    "[2] - Semana",
                                                    "[3] - Mes",
                                                    "[4] - Voltar"};
                const char *menuUmidadeDia[3]          {"[1] - Umidade detalhada Diaria",
                                                        "[2] - Umidade resumida Diaria",
                                                        "[3] - Voltar"};
                const char *menuUmidadeSemana[3]       {"[1] - Umidade detalhada Diaria",
                                                        "[2] - Umidade resumida Diaria",
                                                        "[3] - Voltar"};
                const char *menuUmidadeMes[3]          {"[1] - Umidade detalhada Diaria",
                                                        "[2] - Umidade resumida Diaria",
                                                        "[3] - Voltar"};
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
int menuEspansor(string);
int menuP   = 0;
int menuT   = 0;
int menuTD  = 0;
int menuTS  = 0;
int menuTM  = 0;
int menuU   = 0;
int menuUD  = 0;
int menuUS  = 0;
int menuUM  = 0;
int menuA   = 0;
int menuAF  = 0;
int menuAP  = 0;
int menuAI  = 0;
int main(){
    do{
        menuP = menuEspansor("menuPrincipal");
        switch(menuP){
            case 1:
                do{
                    menuT = menuEspansor("menuTemperatura");
                    switch (menuT){
                        case 1:
                            do{
                                menuTD = menuEspansor("menuTemperaturaDia");
                            }while(menuTD!=3);
                        break;
                        case 2:
                            do{
                                menuTS = menuEspansor("menuTemperaturaSemana");
                            }while(menuTS!=3);
                        break;
                        case 3:
                            do{
                                menuTM = menuEspansor("menuTemperaturaMes");
                            }while(menuTM!=3);
                        break;
                    }
                }while(menuT != 4);
            break;
            case 2:
                do{
                    menuU = menuEspansor("menuUmidade");
                    switch(menuU){
                        case 1:
                            do{
                                menuUD = menuEspansor("menuUmidadeDia");
                            }while(menuUD != 3);
                        break;
                        case 2:
                            do{
                                menuUS = menuEspansor("menuUmidadeSemana");
                            }while(menuUS != 3);
                        break;
                        case 3:
                            do{
                                menuUM = menuEspansor("menuUmidadeMes");
                            }while(menuUM != 3);
                        break;
                    }
                }while(menuU != 4);
            break;
            case 3:
                do{
                    menuA = menuEspansor("menuAjuda");
                    switch(menuA){
                        case 1:
                            do{
                                menuAF = menuEspansor("menuAjudaFuncoes");
                            }while(menuAF != 3);
                        break;
                        case 2:
                            do{
                                menuAP = menuEspansor("menuAjudaPlantas");
                            }while(menuAP != 3);
                        break;
                        case 3:
                            do{
                                menuAI = menuEspansor("menuAjudaIrrigacao");
                            }while(menuAI != 3);
                        break;
                    }
                }while(menuA != 4);
            break;
        }
    }while(menuP != 4);
    return 0;
}
int menuEspansor(string menu){
    if(menu=="menuPrincipal"){
        cout<<"=========================="<<endl;
        cout<<menu<<endl;
        cout<<"=========================="<<endl;
        for(int i=0; i<4; i++) cout<<*(menuPrincipal+i)<<endl;
    }
    if(menu=="menuTemperatura"){
        cout<<"=========================="<<endl;
        cout<<menu<<endl;
        cout<<"=========================="<<endl;
        for(int i=0; i<4; i++) cout<<*(menuTemperatura+i)<<endl;
    }
    if(menu=="menuTemperaturaDia"){
        cout<<"=========================="<<endl;
        cout<<menu<<endl;
        cout<<"=========================="<<endl;
        for(int i=0; i<3; i++) cout<<*(menuTemperaturaDia+i)<<endl;
    }
    if(menu=="menuTemperaturaSemana"){
        cout<<"=========================="<<endl;
        cout<<menu<<endl;
        cout<<"=========================="<<endl;
        for(int i=0; i<3; i++) cout<<*(menuTemperaturaSemana+i)<<endl;
    }
    if(menu=="menuTemperaturaMes"){
        cout<<"=========================="<<endl;
        cout<<menu<<endl;
        cout<<"=========================="<<endl;
        for(int i=0; i<3; i++) cout<<*(menuTemperaturaMes+i)<<endl;
    }
    if(menu=="menuUmidade"){
        cout<<"=========================="<<endl;
        cout<<menu<<endl;
        cout<<"=========================="<<endl;
        for(int i=0; i<4; i++) cout<<*(menuUmidade+i)<<endl;
    }
    if(menu=="menuUmidadeDia"){
        cout<<"=========================="<<endl;
        cout<<menu<<endl;
        cout<<"=========================="<<endl;
        for(int i=0; i<3; i++) cout<<*(menuUmidadeDia+i)<<endl;
    }
    if(menu=="menuUmidadeSemana"){
        cout<<"=========================="<<endl;
        cout<<menu<<endl;
        cout<<"=========================="<<endl;
        for(int i=0; i<3; i++) cout<<*(menuUmidadeSemana+i)<<endl;
    }
    if(menu=="menuUmidadeMes"){
        cout<<"=========================="<<endl;
        cout<<menu<<endl;
        cout<<"=========================="<<endl;
        for(int i=0; i<3; i++) cout<<*(menuUmidadeMes+i)<<endl;
    }
    if(menu=="menuAjuda"){
        cout<<"=========================="<<endl;
        cout<<menu<<endl;
        cout<<"=========================="<<endl;
        for(int i=0; i<4; i++) cout<<*(menuAjuda+i)<<endl;
    }
    if(menu=="menuAjudaFuncoes"){
        cout<<"=========================="<<endl;
        cout<<menu<<endl;
        cout<<"=========================="<<endl;
        for(int i=0; i<3; i++) cout<<*(menuAjudaFuncoes+i)<<endl;
    }
    if(menu=="menuAjudaPlantas"){
        cout<<"=========================="<<endl;
        cout<<menu<<endl;
        cout<<"=========================="<<endl;
        for(int i=0; i<3; i++) cout<<*(menuAjudaPlantas+i)<<endl;
    }
    if(menu=="menuAjudaIrrigacao"){
        cout<<"=========================="<<endl;
        cout<<menu<<endl;
        cout<<"=========================="<<endl;
        for(int i=0; i<3; i++) cout<<*(menuAjudaIrrigacao+i)<<endl;
    }
    int valor;
    cout<<"Digite o valor do menu: ";
    cin>>valor;
    return valor;
}
