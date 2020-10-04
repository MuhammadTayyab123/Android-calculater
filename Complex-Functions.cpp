#include"complexNumber.h"
#include<iostream>
#include<cmath>


complex* inputcomplex()
{
	complex *a = new complex;
	cout << "Enter real part of complex number:";
	cin >> a->real;
	cout << "Enter Imaginery part of complex number:";
	cin >> a->imag;
	return a;
}

void output(complex *x)
{
	if (x->real != 0)
		cout << x->real;
	if (x->imag > 0)
	{
		cout << "+";
	}
	if (x->imag != 0)
	{
		if (x->imag == 1)
		{
			cout << "i";
			cout << endl;
			return;
		}
		if (x->imag == -1)
		{
			cout << "-i";
			cout << endl;
			return;
		}
		cout << x->imag << "i";
	}
	if (x->real == 0 && x->imag == 0)
	{
		cout << x->real;
	}
	cout << endl;
}

double phase(complex *x)
{
	double a = atan(x->imag / x->real);
	return a;
}


complex* NegativeNum(complex *x)
{
	complex *c = new complex;
	c->real = -1 * (x->real);
	c->imag = -1 * (x->imag);
	return c;
}

complex* conjugateNum(complex *x)
{
	complex *c = new complex;
	c->real = x->real;
	c->imag = -1 * (x->imag);
	return c;
}


double Megnitude(complex *x)
{
	double a = sqrt(pow(x->real, 2) + pow(x->imag, 2));
	return a;
}


bool equalitycomplex(complex *x, complex *y)
{
	if (x->real != y->real && x->imag != y->imag)
	{
		return false;
	}
	return true;
}


complex* reciprocal(complex *x)
{
	complex *c = conjugateNum(x);
	double d = Megnitude(x);
	c->real = c->real / d;
	c->imag = c->imag / d;
	return c;
}

complex* sumNum(complex *x, complex *y)
{
	complex *c = new complex;
	c->real = x->real + y->real;
	c->imag = x->imag + y->imag;
	return c;
}



complex* DifferNum(complex *x, complex *y)
{
	complex *c = new complex;
	c->real = x->real - y->real;
	c->imag = x->imag - y->imag;
	return c;
}


complex* product(complex *x, complex *y)
{
	complex *c = new complex;
	c->real = (x->real*y->real) + (-1 * (x->imag*y->imag));
	c->imag = (x->real*y->imag) + (x->imag*y->real);
	return c;
}

