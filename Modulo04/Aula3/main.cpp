//
//  Embaralhamento de Cartas
//  Arquivo principal
//
//  DEITEL, C++ Como Programar
//
//

// =====================================================
// --- Bibliotecas ---
#include "cartas.hpp"


// =====================================================
// --- Função Principal ---
int main()
{
  char opt = 'y';
  unsigned counter = 0;

  cout << "Iniciando..." << endl;

  do
  {
    counter++;
    Cartas baralhoDeCartas;

    baralhoDeCartas.sorteia();

    cout << "Cartas distribuidas " << counter << " vez(es).\n" << endl;
    baralhoDeCartas.distribui();

    cout << "Novo sorteio? (y) sim (n) nao." << endl;
    cin  >> opt;

  } while(opt == 'y' || opt == 'Y');

  cout << "Programa Encerrado." << endl;
  while(1);
  return 0;

} //end main

// =====================================================
// --- Final do Arduino principal ---
