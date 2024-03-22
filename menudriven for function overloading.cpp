#include<iostream>
using namespace std;
float area (float r)
{
	return (3.14 * r *r);
}
int area (int l , int b)
{
	return ( l *b);
}
float area (float b, float h)
{
	return (0.5f * b *h);
}
int main()
{
	int choice, l, b, ar;
	float r, a, height, base;
	do
	{
		cout<<"\n 1. Area of Circle ";
		cout<<"\n 2. Area of Rectangle";
		cout<<"\n 3. Area of Triangle";
		cout<<"\n 4. Exit ";
		cout<<"\n Enter your choice:";
		cin>>choice;
		switch(choice)
		{
			case 1: cout<<"\n Enter radius:";
			        cin>>r;
			        a= area(r);
			        cout<<"\n Area of Circle = "<<a;
			        break;
			case 2: cout<<"\n Enter lenght and breadth:";
			        cin>>l>>b;
			        ar=area(l,b);
			        cout<<"\n Area of Rectangle = "<<ar;
			        break;
			case 3: cout<<"\n Enter base and height:";
			        cin>>base>>height;
			        a=area(base,height);
			        cout<<"\n Area of Triangle = "<<a;
			        break;
		    case 4: break;
		}
		
	}while(choice !=4);
	return 0;
}