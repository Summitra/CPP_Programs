#include<iostream>
using namespace std;
class Perfect
{
	private:
		int n, r, i, sum=0;
		clrscr();
	public:
		void getData()
		{
			cout<<"Enter the number:";
			cin>>n;
		}
		void check()
		{
			for(i=1;i<n;i++)
			{
				r = n%i;
				if(r==0)
				{
					sum = sum+i;
				}
			}
			if(sum==n)
			 cout<<"\n The given number is perfect number.";
			else
			  cout<<"\nThe given number is not a perfect number.";
		}
};
int main()
{
	Perfect P;
	P.getData();
	P.check();
	return 0;
}