#include<iostream>#include<conio.h>using namespace std;class Complex{ float real; float imag;public: void get () { cin >> real >> imag; } void diplay () { cout << "\n sum = " << real << " + " << imag << " i"; } Complex sum (Complex c1, Complex c2) { Complex sum; sum.real = c1.real + c2.real; sum.imag = c1.imag + c2.imag; return sum; }};intmain (){ Complex obj1, obj2; cout << "\n enter the first complex number real and imaginary part :"; obj1.get (); cout << "\n enter the second complex number real and imaginary part :"; obj2.get (); Complex store; store = obj1.sum (obj1, obj2); store.diplay ();}