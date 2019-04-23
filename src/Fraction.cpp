#include "Fraction.h"
#include <iostream>
using namespace std;
Fraction::Fraction()
{
    numerator = 1;
    denominator = 1;
}

Fraction::~Fraction()
{
    //dtor
}

Fraction::Fraction(int num, int denom)
{
    this->numerator = num;
    this->denominator = denom;
}

void Fraction::display()
{
    cout << numerator << "/" << denominator << "\n";
}

Fraction Fraction::operator+(const Fraction &f) const
{
    int a = numerator;
    int b = denominator;
    int c = f.numerator;
    int d = f.denominator;

    Fraction result(a*d + b*c, b*d);
    return result;
}

Fraction Fraction::operator*(const Fraction &f) const
{
    int a = this->numerator;
    int b = this->denominator;
    int c = f.numerator;
    int d = f.denominator;
    Fraction result(a*c, b*d);
    return result;
}

Fraction Fraction::operator-(const Fraction &f) const
{
    int a = numerator;
    int b = denominator;
    int c = f.numerator;
    int d = f.denominator;
    Fraction result(a*d - b*c, b*d);
    return result;
}

Fraction Fraction::operator/(const Fraction &f) const
{
    int a = numerator;
    int b = denominator;
    int c = f.numerator;
    int d = f.denominator;
    Fraction result(a * d, b*c);
    return result;
}

bool Fraction::operator>(const Fraction &f) const
{
    int a = numerator;
    int b = denominator;
    int c = f.numerator;
    int d = f.denominator;
    return (a*d > b*c);
}

bool Fraction::operator<(const Fraction &f) const
{
    int a = numerator;
    int b = denominator;
    int c = f.numerator;
    int d = f.denominator;
    return (a*d < b*c);
}

bool Fraction::operator==(const Fraction &f) const
{
    int a = numerator;
    int b = denominator;
    int c = f.numerator;
    int d = f.denominator;

    return (a*d == b*c);
}

ostream& operator<< (ostream &os, const Fraction &f)
{
    os << f.numerator << "/" << f.denominator;
    return os;
}

istream& operator>>(istream &is, Fraction &f)
{
    char c;
    is >> f.numerator >> c >> f.denominator;
    return is;
}
