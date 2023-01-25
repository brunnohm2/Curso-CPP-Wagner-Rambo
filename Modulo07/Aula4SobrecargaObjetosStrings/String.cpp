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
String::String(const char *stringg):
    _length((stringg!=0)?strlen(stringg):0)
        {setString(stringg);}

String::~String()   {delete [] _sPtr;}

const   String &String::operator    =   (const String &right)
{
    if(&right!=this)
    {
        delete[]        _sPtr;
        _length     =   right._length;
        setString(right._sPtr);
    }else cout << "ocorreu uma tentativa de inicializar a propria string";

    return *this;
}
const String &String::operator+=(const String &right)
{
    size_t  newLength   = _length + right._length;  //novo comprimento
    char    *tempPtr    = new char[newLength+1];    //aloca memória

    strcpy(tempPtr, _sPtr);                         //copia sPtr
    strcpy(tempPtr + _length, right._sPtr);         //copia right.sPtr

    delete []   _sPtr;                              //libera espaço
    _sPtr   =   tempPtr;                            //atribui novo array a sPtr
    _length =   newLength;                          //atribui novo comprimento a length

    return *this;                                   //permite chamadas em cascata
}

bool    String::operator    ==  (const String &right)   const{return strcmp(_sPtr, right._sPtr)==0;}
bool    String::operator    <   (const String &right)   const{return strcmp(_sPtr, right._sPtr)< 0;}
bool    String::operator    !=  (const String &right)   const{return !(*this == right);}
bool    String::operator    >   (const String &right)   const{return right < *this;}
bool    String::operator    <=  (const String &right)   const{return !(right < *this);}
bool    String::operator    >=  (const String &right)   const{return !(*this < right);}

int     String::getLength       ()                      const{return _length;};


void String::setString(const char *string2)
{
    _sPtr = new char [_length+1]; //aloca memória

    if(string2 != 0)  //se a string2 não for um ponteiro nulo, copia o conteúdo
        strcpy(_sPtr, string2);
    else              //senão, torna essa string vazia
        _sPtr[0] = '\0';
}
// ==============================================
// --- Operador de saída sobrecarregado ---
ostream &operator<<(ostream &output, const String &s)
{
  output << s._sPtr;
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

