#include <iostream>
#ifndef NUMBER_H
#define NUMBER_H

class Number {
public:
     Number();
     ~Number();
     virtual void print();
     virtual Number add (const Number&);
     virtual Number mul (const Number&);
     };

class RealNumber : public Number {
public:     
     RealNumber(double);
     ~RealNumber();
     virtual void print();
     virtual RealNumber add (const RealNumber&);
     virtual RealNumber mul(const RealNumber&);
private:
     double a;
     };

class IntegerNumber : public RealNumber {
public:
     IntegerNumber(double,int);
     ~IntegerNumber();
     virtual void print();
     virtual IntegerNumber add (const IntegerNumber&);
     virtual IntegerNumber mul (const IntegerNumber&);
private:
     int b;
     };

class ComplexNumber : public Number{
public:
     ComplexNumber(double,double);
     ~ComplexNumber();
     virtual void print();
     virtual ComplexNumber add (const ComplexNumber&);
     virtual ComplexNumber mul (const ComplexNumber&);
private:
    double c,d;
     };
#endif
