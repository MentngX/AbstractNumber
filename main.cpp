#include "number.h"
#include <iostream>
using namespace std;

int main(){

    cout << "输入两个实数来完成它们的加法和乘法:" << endl;
    double a1,a2;
    cin >> a1 >> a2;
    RealNumber n1(a1);RealNumber n2(a2);
    cout << a1 << " + " << a2 << " = " ;
    n1.add(a2);n1.print();
    cout << a1 << " * " << a2 << " = " ;
    RealNumber n7(a1);
    n7.mul(a2);n7.print();

    cout << "输入两个整数来完成它们的加法和乘法:" <<endl;
    int a3,a4;
    cin >> a3 >> a4 ;
    IntegerNumber n3(a1,a3);IntegerNumber n4(a2,a4);
    cout << a3 << " + " << a4 << " = " ;
    n3.add(n4);n3.print();
    cout << a3 << " * " << a4 << " = " ;
    IntegerNumber n8(a1,a3);
    n8.mul(n4);n8.print();

    cout << "输入两个复数来完成它们的加法和乘法:" <<endl;
    double a5,a6,a7,a8;
    cin >> a5 >> a6 >> a7 >> a8 ;
    ComplexNumber n5(a5,a6);ComplexNumber n6(a7,a8);
    cout << a5 << "+" << a6 << "i" << " + " << a7 << "+" << a8 << "i" << " = ";
    n5.add(n6);n5.print();
    cout << "( " << a5 << "+" << a6 << "i)" << " * " << "( " << a7 << "+" << a8 << "i)" << " = ";
    ComplexNumber n9(a5,a6);
    n9.mul(n6);n9.print();
}
    

    
