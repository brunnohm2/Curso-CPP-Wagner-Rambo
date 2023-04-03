//
//  Classe String para estudo de
//  sobrecarga de operadores
//  bas. DEITEL
//  Array.hpp

#ifndef  ARRAY
#define  ARRAY


// ==============================================
// --- Bibliotecas ---
#include <iostream>
using std::ostream;
using std::istream;


// ==============================================
// --- Classe ---
class Array
{
  friend ostream &operator<<(ostream &, const Array &);
  friend istream &operator>>(istream &, Array &);

  public:
    Array(int=10);          //construtor padrão
    Array(const Array &);   //construtor de cópia
    ~Array();               //destrutor

    int getSize() const;    //retorna o tamanho do array

    const Array &operator=(const Array &);      //operador de atribuição
    bool operator==(const Array &) const;       //operador de igualdadade
    bool operator!=(const Array &) const;       //operador de desigualdade

    int &operator[](int);       //operador subscrito de objetos não-const retorna lvalue modificável
    int operator[](int) const;  //operador de subscrito de objetos const retorna rvalue

  private:
    int sizeA;                  //tamanho do array baseado em ponteiro
    int *ptr;                   //ponteiro para o primeiro elemento do array baseado em ponteiro

}; //end class Array


#endif // ARRAY


// ==============================================
// --- Fim ---
