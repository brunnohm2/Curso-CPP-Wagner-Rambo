//
// Curso: C++, Curso Completo de Wagner Rambo
// Autor: Brunno Hiroshy Murai
// Modulo: 1
// Aula: 2
// Data: 2022-11-27
// IDE Code::Blocks
//
#include <iostream>

int main()
{
    int num1, num2;

    std::cout << "Entre com dois numeros: " << std::endl;
    std::cin >> num1 >> num2;
    std::cout << num1 << "+" << num2 << "=" << num1+num2 << std::endl;
    std::cout << num1 << "-" << num2 << "=" << num1-num2 << std::endl;
    std::cout << num1 << "*" << num2 << "=" << num1*num2 << std::endl;
    std::cout << num1 << "/" << num2 << "=" << (float)num1/(float)num2 << std::endl;    // Float para poder usar casas decimais
    std::cout << num1 << "%" << num2 << "=" << num1%num2 << std::endl;                  // % para retornar o resto da divisao

    if(num1==num2)  std::cout << num1 << " e " << num2 << " sao iguais " << std::endl;
    if(num1!=num2){
        if(num1>num2)   std::cout << num1 << " maior que " << num2 << std::endl;
        if(num1<num2)   std::cout << num1 << " menor que "  << num2 << std::endl;
    }

    std::cout << (int)(3<7)  << std::endl; //imprime 1 verdadeiro
    std::cout << (int)(3>7)  << std::endl; //imprime 0 falso
    std::cout << (int)(3<=7) << std::endl; //imprime 1 verdadeiro
    std::cout << (int)(3>=7) << std::endl; //imprime 0 falso
    std::cout << (int)(3==7) << std::endl; //imprime 0 falso
    std::cout << (int)(3!=7) << std::endl; //imprime 1 verdadeiro

    return 0;
}
