#include<iostream>
using namespace std;
int main()
{
	int a, b,c, choice;
	cout<<"\n1 -> Add";
	cout<<"\n1 -> Sub";
	cout<<"\n1 -> Mul";
	cout<<"\n1 -> Div";
	cout<<"\n Enter your choice:";
	cin>>choice;
	cout<<"\n Enter two numbers:";
	cin>>a>>b;
	switch(choice)
	{
		case 1: c= a+b;
		        cout<<"\n Addition = "<<c;
		        break;
		case 2: c= a-b;
		        cout<<"\n Subtraction = "<<c;
		        break;
		case 3: c= a*b;
		        cout<<"\n Multiplication = "<<c;
		        break;
		case 4: c= a/b;
	            cout<<"\n Division = "<<c;
	            break;
	    default: cout<<"\n Wrong Choice";
	            break;
	}
	return 0;
	
}