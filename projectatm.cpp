#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	double balance, deposit, withdraw;
	int option;
	balance=100;
	do
	{
		cout<<"\n\t ************ Menu ************";
		cout<<"\n\t *                            *";
		cout<<"\n\t*      1.Check Balance        *";
		cout<<"\n\t*      2. Deposit             *";
    	cout<<"\n\t*      3. Withdraw            *"; 
    	cout<<"\n\t*      4. Transfer            *";
    	cout<<"\n\t*      5. Exit                *";
    	cout<<"\n\t*                             *";
    	cout<<"\n\t******************************";
    	cout<<"\n\t Please Choose an Option :";
    	cin>>option;
    	switch(option)
    	{
    		case 1:
    			cout<<"\n\t Your Balance is : $"<<balance;
    			break;
    		case 2:
    			cout<<"\n\t Amount You Want to Deposit : $";
    			cin>>deposit;
    			balance += deposit;    // balance = balance+deposit;
    			cout<<"\n\t Your Current Balance is : $"<<balance<<endl;
    			break;
    		case 3:
    			cout<<"\n\t How much do you want to withdraw? $";
    			cin>>withdraw;
    			if(balance<withdraw)
    			    cout<<"\n\t You do not have enough money in account to withdraw"<<endl;
    			else
    			    balance -= deposit;
    			    cout<<"\n\t Your Current Balance is : $"<<balance<<endl;
    			    break;
    		case 4:
			    cout<<"\n\t This service is currently not avaialble!!!"<<endl;
				break;
			default :
			     if(option!=5)
				     cout<<"\n\t Invalid Option Please Try Again"<<endl;
					 break;	    
    	}
	}while(option!=5);
	return 0;
	getch();
	
}