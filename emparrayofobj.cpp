#include<iostream>
using namespace std;
class employee
{
	private:
		int empid;
		char ename[20], city[20],deptname[20];
		int salary;
    public:
    	void accept()
    	{
    		cout<<"\n Enter the emp id:";
    		cin>>empid;
    		cout<<"\n Enter emp name :";
    		cin>>ename;
    		cout<<"\n Enter the city:";
    		cin>>city;
    		cout<<"\n Enter the dept name:";
    		cin>>deptname;
    		cout<<"\n Enter the salary:";
    		cin>>salary;
		}
	
		void display()
		{
			cout<<"\n \n Employee id = "<<empid;
			cout<<"\n Name = "<<ename;
			cout<<"\n City = "<<city;
			cout<<"\n Dept Name = "<<deptname;
			cout<<"\n Salary = "<<salary;
		}
};
int main()
{
	employee e[10];
	int n,i;
	cout<<"\n How many employee ?";
	cin>>n;
	cout<<"\n Enter information of employee:";
	for(i=0;i<n;i++)
	{
		e[i].accept();
		e[i].display();
	}
	cout<<"\n \n Information of employee is :";
	for(i=0;i<n;i++)
	e[i].display();
}