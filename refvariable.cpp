#include<iostream>
using namespace std;
int main()
{
	int a=100;
	int &b =a;
	cout<<"Value of a = "<<a;
	cout<<"\n Value of b = "<<b;
	a=200;
	cout<<"\nValue of b = "<<b;
	return 0;
}