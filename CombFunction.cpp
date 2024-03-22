#include<iostream>
using namespace std;
float comb(int, int);
int fact(int);
int main()
{
	 int n,r;
	 float c;
	 cout<<"Enter values of n & r:";
	 cin>>n>>r;
	 c=comb(n,r);
	 cout<<"\n Combination = "<<c;
}
float comb(int n,int r)
{
	float c;
	int f1, f2,f3;
	//f1 = fact(n);
	//f2 = fact(r);
	//f3 = fact(n-r);
	c= f1/(f2 *f3);
	c=fact(n)/(fact(r)*fact (n-r));
	return(c);
}
int fact (int x)
{
	 int f=1;
	 while(x>0)
	 {
	 	f=f*x;
	 	x--;
	 }
	 return (f);
}