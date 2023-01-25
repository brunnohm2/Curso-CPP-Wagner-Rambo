//========================================
//---- Class Development (Member-Function)
#include "Area.hpp"
Area::Area():
    _radiusCircumference    (0),
    _lengthRectangle        (0),
    _breadthRectangle       (0),
    _areaCircumference      (0),
    _areaRectangle          (0),
    _areaCR                 (0)
{}

Area::~Area()
{}

Area &Area::setCircumference(double diameter)
{
    _radiusCircumference    =   diameter/2;
    _areaCircumference      =   M_PI*(pow(diameter/2,2));
    return *this;
}
Area &Area::setRectangle    (double legthRectangle, double breadthRectangle)
{
    _lengthRectangle    =   legthRectangle;
    _breadthRectangle   =   breadthRectangle;
    _areaRectangle      =   legthRectangle*breadthRectangle;
    return *this;
}
void Area::calcAreaCR()
{
    _areaCR = _areaRectangle-(_areaCircumference/2);
}
void Area::printValues()
{
    cout<<"Circumference Radius = "         << _radiusCircumference << endl;
    cout<<"Circumference Area= "            << _areaCircumference   << endl;
    cout<<"Rectangle Length = "             << _lengthRectangle     << " Breadth = "<< _breadthRectangle << endl;
    cout<<"Rectangle Area = "               << _radiusCircumference << endl;
    cout<<"Rectangle-Circumference Area = " << _areaCR              << endl;
}
