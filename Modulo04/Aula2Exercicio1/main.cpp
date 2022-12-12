 //
 // Curso: C++, Curso Completo
 // Professor: Wagner Rambo
 // Aluno: Brunno Hiroshy Murai
 // Modulo: 4
 // Aula: 2 Exercicio
 // Data: 2022-12-13
 // IDE Code::Blocks
 // Arquivo main.cpp
 // Desenvolva um programa em C++ para copiar o conteúdo de um array
 //   em outro de mesmo tamanho utilizando ponteiros,
 //   tanto para imprimir os conteúdos na tela, quanto para realizar a cópia.
 //

int main(){
    int const tamanho_array = 10;
    int array1[tamanho_array] = {5,15,44,22,99,77,65,54,63,25};
    int array2[tamanho_array] = {0};

    int *ponteiro1 = array1;
    int *ponteiro2 = array2;

    for(int i=0; i<tamanho_array; i++)
        *(ponteiro2+i) = *(ponteiro1+i);
}
