//
//  Classe String para estudo de
//  sobrecarga de operadores
//  bas. DEITEL
//  Array.cpp


// ==============================================
// --- Bibliotecas ---
#include <iostream>
using std::cerr;  //serve para indicar o erro fora da faixa
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::exit; // encerra o programa quando tentar trabalhar fora da faixa do array

#include "Array.hpp"


// ==============================================
// --- Construtor padr�o ---
Array::Array(int arraySize)
{
  sizeA = (arraySize > 0 ? arraySize : 10);
  ptr = new int[sizeA]; //aloca espa�o na mem�ria para o array

  for(int i=0; i<sizeA; i++)
    ptr[i] = 0;

} //end construtor-padr�o


// ==============================================
// --- Construtor de c�pia ---
// Copia o construtor da classe Array
// deve receber uma refer�ncia para impedir a recurs�o infinita
Array::Array(const Array &arrayToCopy):
sizeA(arrayToCopy.sizeA)
{
  ptr = new int[sizeA];  //aloca espa�o na mem�ria para o array

  for(int i=0; i<sizeA; i++)
    ptr[i] = arrayToCopy.ptr[i]; //copia para o objeto

} //end construtor de c�pia


// ==============================================
// --- Destrutor ---
Array::~Array()
{
  delete [] ptr; //libera espa�o de mem�ria
}

Array Array::operator+(Array soma)
{
    for(int i=0; i<sizeA; i++)
    {
        ptr[i] = ptr[i] + soma.ptr[i];
    }
    return *this;
}
// ==============================================
// --- Retorna o n�mero de elementos do Array ---
int Array::getSize() const
{
  return sizeA;
}


// ==============================================
// --- Operador de atribui��o sobrecarregado ---
const Array &Array::operator=(const Array &right)
{
  if(&right != this) //evita auto-atribui��o
  {
    //para arrays de tamanhos diferentes, desacola array do lado esquerdo
    //original, ent�o aloca o novo array � esquerda
    if(sizeA != right.sizeA)
    {
      delete [] ptr;        //libera espa�o de mem�ria
      sizeA = right.sizeA;  //redimensiona esse objeto
      ptr = new int[sizeA]; //cria espa�o para c�pia do array

    } //end if interno

    for(int i=0; i<sizeA; i++)
      ptr[i] = right.ptr[i]; //copia array para o objeto

  } //end if

  return *this;  //permite atribui��es em cascata

} //end operator=


// ==============================================
// --- Operador de igualdade sobrecarregado ---
bool Array::operator==(const Array &right) const
{
  if(sizeA != right.sizeA)
    return false;             //arrays com n�meros diferentes de elementos

  for(int i=0; i<sizeA; i++)
    if(ptr[i]!=right.ptr[i])
      return false;           //arrays com conte�dos diferentes

  return true;                //arrays s�o iguais

} //end operator==


// ==============================================
// --- Operador de desigualdade sobrecarregado ---
bool Array::operator!=(const Array &right) const
{
  return !(*this == right); //invoca Array::operator==
} //end operator!=


// ==============================================
// --- Operador de subscrito sobrecarregado para Arrays n�o-const ---
int &Array::operator[](int subscript)
{
  //verifica erro de subscrito fora do intervalo
  if(subscript < 0 || subscript >= sizeA)
  {
    cerr << "\nErro: array[" << subscript
         << "] inexistente. " << endl;

    exit(1);  //termina o programa, subscrito fora do intervalo

  } //end if

  return ptr[subscript];  //retorno da refer�ncia

} //end operator[]


// ==============================================
// --- Operador de subscrito sobrecarregado para Arrays const ---
int Array::operator[](int subscript) const
{
  //verifica erro de subscrito fora do intervalo
  if(subscript < 0 || subscript >= sizeA)
  {
    cerr << "\nErro: array[" << subscript
         << "] inexistente. " << endl;

    exit(1);  //termina o programa, subscrito fora do intervalo

  } //end if

  return ptr[subscript];  //retorna c�pia desse elemento

} //end operator[] const


// ==============================================
// --- Operador de entrada sobrecarregado ---
istream &operator>>(istream &input, Array &a)
{
  for(int i=0; i<a.sizeA; i++)
    input >> a.ptr[i];

  return input;

} //end operator>>


// ==============================================
// --- Operador de sa�da sobrecarregado ---
ostream &operator<<(ostream &output, const Array &a)
{
  int i;

  //gera sa�da do array baseado em ptr private
  for(i=0; i<a.sizeA; i++)
  {
    output << setw(12) << a.ptr[i];

    if((i+1) % 5==0)  //5 n�meros por linha de sa�da
      output << endl;

  } //end for

  if(i%5 != 0)        //termina a �ltima linha de sa�da
    output << endl;

  return output;

} //end operator<<






// ==============================================
// --- Fim ---
