#include<iostream>
using namespace std;
class student 
{
	private:
		int rollno;
		char name[20];
		int m1, m2, m3,T;
		float per;
	public:
		void readstu() 
		{
			cout<<"\nEnter roll no:";
			cin>>rollno;
			cout<<"\n Enter the name:";
			cin>>name;
			cout<<"\n Enter marks of 3 subject:";
			cin>>m1>>m2>>m3;
		}
		void cal()
		 {
			T=m1+m2+m3;
			per=(float)T/3;
		}
		void showstu() 
		{
			cout<<"\n Roll no ="<<rollno;
			cout<<"\n Name = "<<name;
			cout<<"\n Total = "<<T;
			cout<<"\n Percentage = "<<per;
		}
};
int main()
 {
	student s1, s2;
	cout<<"\n Enter the information of 1st student:";
	s1.readstu();
	s1.cal();
	cout<<"\n Enter the information of 2nd student:";
	s2.readstu();
	s2.cal();
	cout<<"\n Information of Student is:";
	s1.showstu();
	s2.showstu();
}