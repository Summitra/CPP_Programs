#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int rows,n=1;
	cout<<"Enter the number of rows?";
	cin>>rows;
	for (int i=1;i<=rows;i++)
	{
		for(int j=1; j<=i;++j)
		{
			cout<<n<<" ";
			++n;
		}
		cout<<endl;
	}
	return 0;
}