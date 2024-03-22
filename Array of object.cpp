#include<iostream>
using namespace std;
class student
{
	private:
		int rollno;
		char name[30];
		int m[3],T;
		float per;
    public:
    	void readstu()
    	{
    		cout<<"\n Enter rollno :";
    		cin>>rollno;
    		cout<<"\n Enter name :";
    		cin>>name;
    		cout<<"\n Enter marks of 3 subjects:";
    		for(int i=0;i<3;i++)
    		cin>>m[i];
		}
		void cal()
		{
			T=0;
			for(int i=0;i<3;i++)
			 T= T+m[i];
			 per=(float)T/3;
		}
		void showstu()
		{
			cout<<"\n \n Roll no = "<<rollno;
			cout<<"\n Name = "<<name;
			cout<<"\n Total = "<<T;
			cout<<"\n Percentage = "<<per;
		}
};
int main()
{
	student s[10];
	int n,i;
	cout<<"\n How many students ?";
	cin>>n;
	cout<<"\n Enter information of student :";
	for(i=0;i<n;i++)
	{
		s[i].readstu();
		s[i].cal();
	}
	cout<<"\n Information of student is :";
	for(i=0;i<n;i++)
	s[i].showstu();
}