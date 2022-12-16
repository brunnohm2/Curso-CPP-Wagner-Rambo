//
//  Embaralhamento de Cartas
//  Arquivo hpp
//
//  DEITEL, C++ Como Programar
//
//

// =====================================================
// --- Bibliotecas ---
#include "cartas.hpp"


// =====================================================
// --- Desenvolvimento das Funções ---

// =====================================================
// --- Construtor ---
Cartas::Cartas()
{
  for(int lin=0; lin <= 3; lin++)
  {
    for(int col=0; col <= 12; col++)
      baralho[lin][col] = 0; //iniciliaza tudo com 0

  } //end for externo

  srand(time(0)); //semente para números aleatórios

} //end Cartas


// =====================================================
// --- A função sorteia vai embaralhar as cartas ---
void Cartas::sorteia()
{
  int lin,    //naipes
      col;    //valor da face da carta

  //escolhe um slot aleatoriamente, para cada uma das 52 cartas
  for(int carta=1; carta<=52; carta++)
  {
    do
    {
      lin = rand()%4;   //seleciona uma linha aleatoriamente
      col = rand()%13;  //seleciona uma coluna aleatoriamente

    } while(baralho[lin][col] != 0); //sorteia novamente caso já existe um valor
                                     //diferente de zero no slot atual

    baralho[lin][col] = carta;


  } //end for

} //end sorteia


// =====================================================
// --- A função distribui vai distribuir as cartas ---
void Cartas::distribui()
{
  static const char *naipe[4] = { "Copas",
                                  "Ouros",
                                  "Paus",
                                  "Espadas" };

  static const char *face[13] = { "As",
                                  "Dois",
                                  "Tres",
                                  "Quatro",
                                  "Cinco",
                                  "Seis",
                                  "Sete",
                                  "Oito",
                                  "Nove",
                                  "Dez",
                                  "Valete",
                                  "Dama",
                                  "Rei"     };

  for(int carta = 1; carta <= 52; carta++)
  {
    for(int lin=0; lin<4;lin++)
    {
      for(int col=0;col<13;col++)
      {
        if(baralho[lin][col] == carta)
        {
          cout << setw(9) << right <<  face[col] << " de "
               << setw(9) << left  << naipe[lin]
               << (carta%2 == 0 ? '\n' : '\t');

        } //end if

      } //end for ainda mais interno

    } //end for interno

  } //end for externo

} //end distribui


// =====================================================
// --- Final do arquivo cpp ---

