#include<iostream>
using namespace std;
int main()
{
	int a=10;
	cout<<"Value of a is "<<a;
	:: a = 40;
	cout<<"\n Value of a is "<<::a;
}