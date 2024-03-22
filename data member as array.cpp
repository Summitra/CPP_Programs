#include<iostream>
using namespace std;
class student
{
	private:
		int rollno;
		char name[20];
		int m[3], T;
		float per;
	public:
		void readstu()
		{
			cout<<"\n Enter rollno :";
			cin>>rollno;
			cout<<"\n Enter the name :";
			cin>>name;
			cout<<"\n Enter marks of 3 subject :";
			for(int i=0;i<3;i++)
			    cin>>m[i];
		}
		void cal()
		{
			T=0;
			for(int i=0;i<3;i++)
			 T=T+m[i];
			 per=(float)T/3;
		}
		void showstu()
		{
			cout<<"\n Roll no = "<<rollno;
			cout<<"\n Name  = "<<name;
			cout<<"\n Total = "<<T;
			cout<<"\n Percentage = "<<per;
		}
};
int main()
{
	student s1,s2;
	cout<<"\n Enter the information of first student:\n";
	s1.readstu();
	s1.cal();
	cout<<"\n Information of Student :";
	s1.showstu();
}
