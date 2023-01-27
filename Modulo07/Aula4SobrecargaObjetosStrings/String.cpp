//========================================
//---- Class Development (Member-Function)

//========================================
//----  Library
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstring>
using std::strlen;
using std::strcmp;
using std::strcpy;
using std::strcat;

#include "String.hpp"
String::String(const char *caracteres):
    _length((caracteres!=0) ? strlen(caracteres) : 0)

    {setString(caracteres);}

String::~String()   {delete [] _stringPtr;}

const   String &String::operator    =   (const String &right)
{
    if(&right!=this)
    {
        delete[]        _stringPtr;
        _length     =   right._length;
        setString(right._stringPtr);
    }else cout << "ocorreu uma tentativa de inicializar a propria string";

    return *this;
}
const String &String::operator+=(const String &right)
{
    size_t  newLength   = _length + right._length;  //novo comprimento
    char    *tempPtr    = new char[newLength+1];    //aloca memória

    strcpy(tempPtr, _stringPtr);                    //copia sPtr
    strcpy(tempPtr + _length, right._stringPtr);    //copia right.sPtr


    delete []   _stringPtr;                         //libera espaço
    _stringPtr  =   tempPtr;                        //atribui novo array a sPtr
    _length     =   newLength;                      //atribui novo comprimento a length

    return *this;                                   //permite chamadas em cascata
}

bool    String::operator    ==  (const String &right)   const{return strcmp(_stringPtr, right._stringPtr)==0;}
bool    String::operator    <   (const String &right)   const{return strcmp(_stringPtr, right._stringPtr)< 0;}
bool    String::operator    !=  (const String &right)   const{return !(*this == right);}
bool    String::operator    >   (const String &right)   const{return right < *this;}
bool    String::operator    <=  (const String &right)   const{return !(right < *this);}
bool    String::operator    >=  (const String &right)   const{return !(*this < right);}

int     String::getLength       ()                      const{return _length;};


void String::setString(const char *caracteres)
{
    _stringPtr = new char [_length+1];  //aloca memória

    if(caracteres != 0)                 //se a string2 não for um ponteiro nulo, copia o conteúdo
        strcpy(_stringPtr, caracteres);
    else                                //senão, torna essa string vazia
        _stringPtr[0] = '\0';
}
// ==============================================
// --- Operador de saída sobrecarregado ---
ostream &operator<<(ostream &output, const String &s)
{
  output << s._stringPtr;
  return output;  //permite cascateamento

}


// ==============================================
// --- Operador de entrada sobrecarregado ---
istream &operator>>(istream &input, String &s)
{
  char temp[100];  //buffer para armazenar entrada
  input >> setw(100) >> temp;
  s = temp; //utiliza operador de atribuição da classe String
  return input; //permite cascateamento
}

