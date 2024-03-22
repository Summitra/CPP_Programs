#include<iostream>
using namespace std;
class Rev
{
	private:
		int n,i,rev=0;
		clrscr();
	public:
		void getData()
		{
			cout<<"Enter any number:";
			cin>>n;
		}
	   void check()
        {
       	while(n!=0)
       	{
       		i = n%10;
       		rev = rev * 10 +i;
       		n = n/10;
	    }
	    cout<<"Reversed number is:"<<rev;
	    }
};
int main()
{
	Rev R;
	R.getData();
	R.check();
	return 0;
}