
//========================================
//---- Class Development
#ifndef VET3D
#define VET3D
//==================================
//---- Library
#include <iostream>         // Biblioteca padrao de entrada e saida de dados
using std::endl;            // Linha nova
using std::cout;            // Imprime dados
using std::cin;             // Obtem dados inseridos na tela
class Vet3d
{
public:
  Vet3d(int x = 0, int y = 0, int z = 0);
  Vet3d operator+(Vet3d);

  int getX() const;
  int getY() const;
  int getZ() const;
private:
  int _x;
  int _y;
  int _z;
};
#endif

