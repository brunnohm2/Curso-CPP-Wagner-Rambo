//
// Curso: C++, Curso Completo
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai
// Modulo: 4
// Aula: 5
// Data: 2022-12-16
// IDE Code::Blocks
// Arquivo main.cpp
//
//==================================
// Bibliotecas
#include <iostream>         // Biblioteca padrao de entrada e saida de dados
using std::endl;            // Linha nova
using std::cout;            // Saida de dados
using std::cin;             // Entrada de dados

#include <cstring>          // Biblioteca Manipuladores de vetores de caracteres
using std::strcmp;          // Compara strings Ex.: strcmp(str1,str2) retorna 0 se for igual, retorna valor negativo se str1 for menor que str2, retorna valor positivo se str1 for maior que str2

//==================================
// Prototipo de funcoes
void systemwr(short &);
void error(short &);
//==================================
// Funcao Principal
int main()
{
    char senha[21]      = "1234";
    char entrada[21]    = "1234";
    short stamain       = 0;
    short cnt           = 0;
    cout<<"Crie uma senha. Nao utiliza espacos."<<endl;
    cout<<">>>";
    cin>>senha;

    cout<<"Senha criada com sucesso!"<<endl;
    do{
        cout<<"Entre com a sua senha:"<<endl;
        cin>>entrada;
        if(strcmp(senha, entrada)==0)
            systemwr(stamain);
        else
            error(cnt);
    }while(stamain==0 && cnt<3);// end do while
    if(cnt>2)cout<<"Sistema bloqueado"<<endl;
    cout<<"Programa encerrado"<<endl;

    return 0;
}
//==================================
// Desenvolvimento de Funcoes
void systemwr(short &sta){
    cout<<"Senha esta correta"<<endl;
    cout<<"Voce entrou no sistema"<<endl;
    sta = 1;
}
void error(short &counter){
    counter++;
    cout<<"Senha incorreta"<<endl;
    cout<<"Voce tem mais "<<3-counter<<" tentativa(s)."<<endl;
}
