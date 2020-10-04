#include"complexNumber.h"
#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	complex *h = new complex;
	h->real = 3;
	h->imag = 6;
	complex *a;
	a = inputcomplex();
	cout << endl;
	cout << "Output of A IS:";
	output(a);
	cout << endl;
	cout << endl;
	cout << "Negative of A IS:";
	complex *b = NegativeNum(a);
	output(b);
	cout << endl;
	cout << endl;
	cout << "Conjugate of A IS:";
	complex *c = conjugateNum(a);
	output(c);
	cout << endl;
	cout << endl;
	cout << "Megnitude of A is " << Megnitude(a);
	cout << endl;
	cout << endl;
	cout << "a and b are equal it is true or false:  "<<boolalpha << equalitycomplex(a, b);
	cout << endl;
	cout << endl;
	cout << "receprocal of a is:  ";
	complex *d = reciprocal(a);
	output(d);
	cout << endl;
	cout << endl;
	cout << "Sum of a and h is :  ";
	complex *e=sumNum(a, h);
	output(e);
	cout << endl;
	cout << endl;
	cout << "Difference of a and b is :  ";
	complex *f=DifferNum(a, b);
	output(f);
	cout << endl;
	cout << endl;
	cout << "Product  of a and b is :  ";
	complex *g=product(a, b);
	output(g);
	cout << endl;
	cout << endl;
	cout << "phase of a complex number is:" << phase(a);
	cout << endl;
	cout << endl;
	delete a,b,c,d,e,f,g;
}