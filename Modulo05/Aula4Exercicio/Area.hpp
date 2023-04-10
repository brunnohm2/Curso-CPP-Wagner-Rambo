//==================================
//---- Library
#include <iostream>         // Biblioteca padrao de entrada e saida de dados
using std::endl;            // Linha nova
using std::cout;            // Imprime dados

#include <cmath>            // Biblioteca Funcoes gerais para calculos matematicos
using std::pow;             // Calcula a potencia de um numero Ex.: pow(3, 4) 3 elevado a 4

//========================================
//---- Class Development
#ifndef CLASSNAME
#define CLASSNAME
class Area
{
public:
  Area                        ();
  ~Area                       ();
  Area    &setCircumference   (double);
  Area    &setRectangle       (double, double);
  void    calcAreaCR          ();
  void    printValues         ();

private:
  double  _radiusCircumference;
  double  _lengthRectangle;
  double  _breadthRectangle;
  double  _areaCircumference;
  double  _areaRectangle;
  double  _areaCR;
};
#endif

