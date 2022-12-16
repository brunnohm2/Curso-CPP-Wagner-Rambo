//
//  Embaralhamento de Cartas
//  Arquivo hpp
//
//  DEITEL, C++ Como Programar
//
//

// =====================================================
// --- Bibliotecas ---
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::left;
using std::right;

#include <iomanip>
using std::setw;

#include <cstdlib> //protótipo das rand e srand
using std::rand;
using std::srand;

#include <ctime>   //protótipo para time
using std::time;


// =====================================================
// --- Classe ---
class Cartas
{
  public:
    Cartas();           //construtor
    void sorteia();     //sorteio das cartas
    void distribui();   //distribuição das cartas

  private:
    int baralho[4][13]; //baralho com 4 naipes e 13 cartas

}; //end class Cartas

// =====================================================
// --- Final do arquivo hpp ---















