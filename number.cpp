#include "number.h"
#include <iostream>
using namespace std;

Number::Number() {}

void Number::print(){}

Number Number::add(const Number& other){
    return *this;}

Number Number::mul(const Number& other){
    return *this;}

Number::~Number(){}

RealNumber::RealNumber(double x)
    : Number(),a(x)
    {}

RealNumber RealNumber::add(const RealNumber& other){
    a += other.a;
    return *this;}

RealNumber RealNumber::mul(const RealNumber& other){
    a *= other.a;
    return *this;}

void RealNumber::print(){
    cout << a << endl;}

RealNumber::~RealNumber(){}

IntegerNumber::IntegerNumber(double x, int y)
    :RealNumber(x),b(y)
    {}

IntegerNumber IntegerNumber::add(const IntegerNumber& other)
{
    b += other.b;
    return *this;
}

IntegerNumber IntegerNumber::mul(const IntegerNumber& other)
{
    b *= other.b;
    return *this;
}

void IntegerNumber::print(){
    cout << b << endl;}

IntegerNumber::~IntegerNumber(){}

ComplexNumber::ComplexNumber(double x, double y)
    :Number(), c(x), d(y)
    {}

ComplexNumber ComplexNumber::add(const ComplexNumber& other)
{
    c += other.c;
    d += other.d;
    return *this;
}

ComplexNumber ComplexNumber::mul(const ComplexNumber& other)
{
    double m,n;
    m = c * other.c - d * other.d;
    n = c * other.d + d * other.c;
    c = m;
    d = n;
}

void ComplexNumber::print()
{
    if (c == 0)
    cout << d << "i" << endl;
    else if (d == 0)
    cout << c << endl;
    else if (d > 0)
    cout << c << "+" << d << "i" << endl;
    else if (d < 0)
    cout << c << d << "i" << endl;
}

ComplexNumber::~ComplexNumber(){}
     
