#include<iostream>
using namespace std;
class complex
{
	int real, img;
	public:
		void readcomplex();
		void showcomplex();
		complex add (complex);
};
void complex::readcomplex()
{
	cout<<"\n Enter real and img part:";
	cin>>real>>img;
}
void complex::showcomplex()
{
	cout<<"\n Complex No = "<<real<<"+"<<img<<"i";
}
complex complex ::add(complex b)
{
	complex c;
	c.real=real+b.real;
	c.img=img+b.img;
	return (c);
}
int main()
{
	complex c1,c2,c3;
	cout<<"\n Enter first complex no:";
	c1.readcomplex();
	cout<<"\n Enter second complex no:";
	c2.readcomplex();
	c3=c1.add(c2);
	cout<<"\n Addition of complex no:\n";
	c3.showcomplex();
}