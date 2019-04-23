#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
using namespace std;

class Fraction
{
    public:
        Fraction();
        virtual ~Fraction();
        Fraction(int numerator, int denominator);
        void display();
        //operators overloading
        //nap chong toan tu +
        Fraction operator+(const Fraction &f) const;
        //nap chong toan tu ==
        bool operator==(const Fraction &f) const;
        //nap chong toan tu *
        Fraction operator*(const Fraction &f) const;
        //nap chong toan tu /
        Fraction operator/(const Fraction &f) const;
        //nap chong toan tu -
        Fraction operator-(const Fraction &f) const;
        //operator >
        bool operator>(const Fraction &f) const;
        //operator <
        bool operator<(const Fraction &f) const;
        //overload operator << cua lop ostream
        friend ostream& operator <<(ostream &os, const Fraction &f);
        //operator >> cua lop istream
        friend istream& operator >>(istream &is, Fraction &f);

    protected:

    private:
        int numerator;
        int denominator;
};

#endif // FRACTION_H
