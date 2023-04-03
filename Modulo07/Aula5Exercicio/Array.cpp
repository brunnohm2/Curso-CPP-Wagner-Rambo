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
// --- Construtor padrão ---
Array::Array(int arraySize)
{
  sizeA = (arraySize > 0 ? arraySize : 10);
  ptr = new int[sizeA]; //aloca espaço na memória para o array

  for(int i=0; i<sizeA; i++)
    ptr[i] = 0;

} //end construtor-padrão


// ==============================================
// --- Construtor de cópia ---
// Copia o construtor da classe Array
// deve receber uma referência para impedir a recursão infinita
Array::Array(const Array &arrayToCopy):
sizeA(arrayToCopy.sizeA)
{
  ptr = new int[sizeA];  //aloca espaço na memória para o array

  for(int i=0; i<sizeA; i++)
    ptr[i] = arrayToCopy.ptr[i]; //copia para o objeto

} //end construtor de cópia


// ==============================================
// --- Destrutor ---
Array::~Array()
{
  delete [] ptr; //libera espaço de memória
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
// --- Retorna o número de elementos do Array ---
int Array::getSize() const
{
  return sizeA;
}


// ==============================================
// --- Operador de atribuição sobrecarregado ---
const Array &Array::operator=(const Array &right)
{
  if(&right != this) //evita auto-atribuição
  {
    //para arrays de tamanhos diferentes, desacola array do lado esquerdo
    //original, então aloca o novo array à esquerda
    if(sizeA != right.sizeA)
    {
      delete [] ptr;        //libera espaço de memória
      sizeA = right.sizeA;  //redimensiona esse objeto
      ptr = new int[sizeA]; //cria espaço para cópia do array

    } //end if interno

    for(int i=0; i<sizeA; i++)
      ptr[i] = right.ptr[i]; //copia array para o objeto

  } //end if

  return *this;  //permite atribuições em cascata

} //end operator=


// ==============================================
// --- Operador de igualdade sobrecarregado ---
bool Array::operator==(const Array &right) const
{
  if(sizeA != right.sizeA)
    return false;             //arrays com números diferentes de elementos

  for(int i=0; i<sizeA; i++)
    if(ptr[i]!=right.ptr[i])
      return false;           //arrays com conteúdos diferentes

  return true;                //arrays são iguais

} //end operator==


// ==============================================
// --- Operador de desigualdade sobrecarregado ---
bool Array::operator!=(const Array &right) const
{
  return !(*this == right); //invoca Array::operator==
} //end operator!=


// ==============================================
// --- Operador de subscrito sobrecarregado para Arrays não-const ---
int &Array::operator[](int subscript)
{
  //verifica erro de subscrito fora do intervalo
  if(subscript < 0 || subscript >= sizeA)
  {
    cerr << "\nErro: array[" << subscript
         << "] inexistente. " << endl;

    exit(1);  //termina o programa, subscrito fora do intervalo

  } //end if

  return ptr[subscript];  //retorno da referência

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

  return ptr[subscript];  //retorna cópia desse elemento

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
// --- Operador de saída sobrecarregado ---
ostream &operator<<(ostream &output, const Array &a)
{
  int i;

  //gera saída do array baseado em ptr private
  for(i=0; i<a.sizeA; i++)
  {
    output << setw(12) << a.ptr[i];

    if((i+1) % 5==0)  //5 números por linha de saída
      output << endl;

  } //end for

  if(i%5 != 0)        //termina a última linha de saída
    output << endl;

  return output;

} //end operator<<






// ==============================================
// --- Fim ---
