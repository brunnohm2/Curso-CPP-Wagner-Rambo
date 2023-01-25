//==================================
//---- Library
#include <iostream>         // Biblioteca padrao de entrada e saida de dados
using std::ostream;
using std::istream;

//========================================
//---- Class Development
#ifndef STRING
#define STRING
class String
{
    friend ostream &operator<<(ostream &, const String &);
    friend istream &operator>>(istream &, String &);

    public:
        String(const char *stringg = "");
        ~String();

        const String &operator = (const String &);
        const String &operator +=(const String &);

        bool    operator    ==  (const String &) const;
        bool    operator    <   (const String &) const;
        bool    operator    !=  (const String &) const;
        bool    operator    >   (const String &) const;
        bool    operator    <=  (const String &) const;
        bool    operator    >=  (const String &) const;

        int     getLength() const;

    private:
        unsigned int     _length;
        char            *_sPtr;
        void            setString(const char *string2);

};
#endif
