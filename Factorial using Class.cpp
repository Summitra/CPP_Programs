#include<iostream>
using namespace std;
class Fact
{
	private:
		int n,i,fact=1;
		clrscr();
	public:
		void getdata()
		{
			cout<<"Enter any number:";
			cin>>n;
		}
		void check()
		{
			for(i=1;i<=n;++i)
			{
				fact = fact *i;
			}
			cout <<"\n Factorial of a number is :"<<fact;
		}
};
int main()
{
	Fact F;
	F.getdata();
	F.check();
	return 0;
}