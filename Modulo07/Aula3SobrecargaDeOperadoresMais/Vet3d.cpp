//========================================
//---- Class Development (Member-Function)
#include "Vet3d.hpp"

//========================================
//----  Construtor
Vet3d::Vet3d(int x, int y, int z):
_x(x),
_y(y),
_z(z)
{}

//========================================
//----  Sobrecarga do operador +
Vet3d Vet3d::operator+(Vet3d P)
{
  _x = _x+P._x;
  _y = _y+P._y;
  _z = _z+P._z;
  return Vet3d(_x, _y, _z);
}
int Vet3d::getX() const {return _x;}
int Vet3d::getY() const {return _y;}
int Vet3d::getZ() const {return _z;}
