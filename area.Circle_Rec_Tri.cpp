#include<iostream>
using namespace std;
int main()
{
	 float a, rad, length, breadth, base, height;
	 int choice;
	 cout<<"\n1 -> Area of circle";
	 cout<<"\n1 -> Area of Triangle";
	 cout<<"\n1 -> Area of Rectangle";
	 cout<<"\n Enter your choice:";
	 cin>>choice;
	 switch(choice)
	 {
	 	case 1: cout<<"\n Enter radius:";
	 	        cin>>rad;
	 	        a=3.14 *rad*rad;
	 	        cout<<"\n Area of circle = "<<a;
	 	        break;
	    case 2: cout<<"\n Enter base:";
	            cin>>base;
	            cout<<"\n Enter height:";
	            cin>>height;
	            a = 1.00/2 * base * height;
	            cout<<"\n Area of Triangle = "<<a;
	            break;
	    case 3: cout<<"\n Enter length:";
	            cin>>length;
	            cout<<"\n Enter breadth:";
	            cin>>breadth;
	            a = length * breadth;
	            cout<<"\n Area of Rectangle = "<<a;
	            break;
	    default : cout<<"\n Wrong Choice";
	 }
	 return 0;
}