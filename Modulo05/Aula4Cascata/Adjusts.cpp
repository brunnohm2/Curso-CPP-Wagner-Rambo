//========================================
//---- Class Development (Member-Function)
#include "Adjusts.hpp"
Adjusts::Adjusts
    (int volume, int brightness, int contrast)
    {setAdjust(volume, brightness, contrast);}

Adjusts::~Adjusts
    ()
    {}

Adjusts &Adjusts::setAdjust
    (int volume, int brightness, int contrast)
{
    setVolume(volume);
    setBrightness(brightness);
    setContrast(contrast);
    return *this;
}

Adjusts &Adjusts::setVolume(int volume)
{
    _volume = (volume>=0 && volume<=100 ? volume : 50);
    return *this;
}

Adjusts &Adjusts::setBrightness(int brightness)
{
    _brightness = (brightness>=0 && brightness<=100 ? brightness : 50);
    return *this;
}

Adjusts &Adjusts::setContrast(int contrast)
{
    _contrast = (contrast>=0 && contrast<=100? contrast : 50);
    return *this;
}

void    Adjusts::displayParameter() const
{
    cout << "==============================================================" << endl;
    cout << "Display Parameter" << endl;
    cout << "--------------------------" << endl;
    cout << "Volume is set to    : " << setw(3) << _volume      << "%"<<endl;
    cout << "Brightness is set to: " << setw(3) << _brightness  << "%"<<endl;
    cout << "Contrast is set to  : " << setw(3) << _contrast    << "%"<<endl;

}
