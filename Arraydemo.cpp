#include<iostream>
using namespace std;
int main()
{
	int a[10], n,i;
	cout<<"\n How many values?";
	cin>>n;
	cout<<"\n Enter the values:";
	for(i=0;i<n;i++)
	{
		  cin>>a[i];
	}
	cout<<"\n Values of array :\n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\n";
	}
	return 0;
}