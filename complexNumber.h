#include<iostream>
using namespace std;

struct complex
{
	double real;
	double imag;
};

complex* inputcomplex();
void output(complex *);
double phase(complex * );
complex* NegativeNum(complex *);
complex* conjugateNum(complex *);
double Megnitude(complex *);
bool equalitycomplex(complex *, complex *);
complex* reciprocal(complex *);
complex* sumNum(complex *, complex *);
complex* DifferNum(complex *, complex *);
complex* product(complex *, complex *);


//complex a = { 2, 0 };
//complex b = { -4, -2 };
//complex c = { 5, -1 };
//complex d = { 0, -1 };