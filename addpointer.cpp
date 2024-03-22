#include<iostream>
using namespace std;
int main()
{
	int a, b, c, *p, *q, *r;
	p= &a;
	q=&b;
	r=&c;
	cout<<"Enter two values:";
	cin>>*p>>*q;
	*r= *p +*q;
	cout<<"\n Addition = "<<*r;
	//cout<<"\n Add = "<<c;
}