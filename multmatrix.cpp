#include<iostream>
using namespace std;
int main()
{
	int i, j, a[5][5], b[5][5], c[5][5],m, n, p,q,k;
	cout<<"Enter size of First matrix:";
	cin>>m>>n;
	cout<<"\n Enter Values of First matrix:";
	for(i=0; i<m;i++)
	 for(j=0;j<n;j++)
	 cin>>a[i][j];
	 cout<<"\n Enter size of Second matrix:";
	 cin>>p>>q;
	 cout<<"\n Enter Values of Second matrix:";
	 for(i=0;i<p;i++)
	  for(j=0;j<q;j++)
	  cin>>b[i][j];
	  if(n!=p)
	  {
	  	cout<<"\n Multiplication is not possible";
	  	exit(0);
	  }
	  for(i=0;i<m;i++)
	  {
	  	for(j=0;j<q;j++)
	  	{
	  		c[i][j]=0;
	  		for(k=0;k<n;k++)
	  		{
	  			c[i][j] = a[i][j] * b[i][j];
	  		
			}
		}
	  }
	  cout<<"\n Multiplication of matrix:";
	  for(i=0;i<m;i++)
	  {
	  	for(j=0;j<q;j++)
	  	{
	  		cout<<c[i][j]<<"";
		}
		  cout<<"\n";
	  }
}