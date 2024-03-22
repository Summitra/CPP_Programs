#include<iostream>
using namespace std;
class complex
{
	int real, img;
	public:
		void readcomplex();
		void showcomplex();
		void add(complex, complex);
};
void complex :: readcomplex()
{
	cout<<"\nEnter real and img part:";
	cin>>real>>img;
}
void complex::showcomplex()
{
	cout<<"\n Complex no = "<<real<<"+"<<img<<"i";
}
void complex :: add(complex a, complex b)
{
	real=a.real+b.real;
	img=a.img+b.img;
}
int main()
{
	complex c1,c2,c3;
	cout<<"\n Enter first complex no:";
	c1.readcomplex();
	cout<<"\n Enter second complex no:";
	c2.readcomplex();
	c3.add(c1,c2);
	cout<<"\n Addition  of complex no = \n";
	c3.showcomplex();
}

  