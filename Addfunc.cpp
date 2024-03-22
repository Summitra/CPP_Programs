#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	int add(int,int);    //function declaration
	cout<<"Enter two values:";
	cin>>a>>b;
	c=add(a,b);   //function call
	cout<<"\nAddition = "<<c;
}
int add(int x, int y)    //function defination
{
	 int z;
	 z=(x+y);
	 return (z);
}