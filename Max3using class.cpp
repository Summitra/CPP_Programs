#include<iostream>
using namespace std;
class Max
{
	private:
		int a, b,c;
		clrscr();
    public:
    	void input()
    	{
    		cout<<"Enter any three numbers:";
    		cin>>a>>b>>c;
		}
		void check()
		{
			if(a>b && a>c)
			{
				cout<<"\n Maximum number is:"<<a;
			}
			else if(b>c)
			{
				cout<<"\n Maximum number is:"<<b;
			}
			else
                cout<<"\n Maximum number is:"<<c;
		}
};
int main()
{
	Max M;
	M.input();
	M.check();
	return 0;
}