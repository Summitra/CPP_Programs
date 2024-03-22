#include <conio.h>
#include <iostream>
#include <string>
using namespace std;
/* Mini project  - ATM
  -> Check Balance
  -> Cash withdraw
  -> User Details
  -> Update mobile no.
  */
class ATM {                              //class atm
	private :                                  // private member variables
		long int account_No;
		string name;
		int PIN;
		double balance;
		string mobile_no;

	public :                                   // public member functions
		//setData function is setting the Data into the private member variables
		void setData(long int account_No_a, string name_a, int PIN_a, double balance_a, string mobile_no_a) {
			account_No =  account_No_a;    // assinging the formal arguments to the private member variables
			name = name_a;
			PIN = PIN_a;
			balance = balance_a;
			mobile_no = mobile_no_a;
		}
// getAccountNo function is returning the user's account No
		long int getAccountNo() {
			return account_No;
		}
// getName function is returning the user's Name
		string getName() {
			return name;
		}
// getPIN function is returning the user's PIN
		int getPIN() {
			return PIN;
		}
// getBalance functionb is returning the user's bank balance
		double getBalance() {
			return balance;

		}
// getMobileNo is returning the user's Mobile No.
		string getMobileNo() {
			return mobile_no;
		}
//setMobile function is Updating the user mobile no
		void setMobile(string mob_prev, string mob_new) {
			if(mob_prev == mobile_no) {             //it will check old mobile_no
				mobile_no = mob_new;              //and update with new, if old matches
				cout<< endl<< "Successfully Updated Mobile No !!";
				getch();                       // getch is to hold the screen (until user press any key)
			} else {
				cout<< endl<<  "Incorrect!!! Old mobile no.";
				getch();
			}
		}
		// cashWithDraw function is used to withdraw money from ATM
		void cashWithDraw(int amount_a) {
			if(amount_a >0 && amount_a <balance) {
				balance -= amount_a;
				cout<< endl<<  "Please collect your cash!!!";
				cout<< endl<<"Available Balance :"<<balance<<endl;
				getch();
			} else {
				cout<< endl<<"Invalid input or insufficient Balance !!";
				getch();
			}
		}

};
int main() {
	int choice=0, enterPIN;
	long int enterAccountNo;
	system("cls");
	ATM user1;
	user1.setData(123456789, "Tim", 1111, 45000.9, "9087654321");
	do {
		system("cls");
		cout<< endl<<"***** Welcome to ATM *****" <<endl;
		cout<< endl<<"Enter Your Account NO :";
		cin>> enterAccountNo;
		cout<< endl<< "Enter  PIN";
		cin>> enterPIN;
		if((enterAccountNo ==  user1.getAccountNo())&& ((enterPIN == user1.getPIN())))
			do {
				int amount=0;
				string oldMobileno, newMobileno;
				system("cls");
				cout<< endl<< "***** Welcome to ATM *****" <<endl;
				cout<< endl<< "Select Options";
				cout<< endl<<" 1.Check Balance";
				cout<< endl<<" 2.Cash withdraw";
				cout<< endl<< " 3.Shown User Details";
				cout<< endl<<" 4.Update mobile no";
				cout<<  endl<< " 5.exit" <<endl;
				cin>> choice;
				switch(choice) {
					case 1:
						cout<< endl<<"Your bank balance is:" << user1.getBalance();
						getch();
						break;
					case 2:
						cout<< endl<<"Enter the amount :";
						cin>> amount;
						user1.cashWithDraw(amount);
						break;
					case 3:
						cout<< endl<<"**** User Details Are ****:" ;
						cout<< endl<<"-> Account No. :" << user1.getAccountNo();
						cout<< endl<<"-> Name : " << user1.getName();
						cout<<  endl<<"-> Balance :" << user1.getBalance();
						cout<< endl<<"-> Mobile No :" << user1.getMobileNo();
						getch();
						break;
					case 4:
						cout<< endl<<"Enter Old Mobile No.";
						cin>> oldMobileno;
						cout<< endl<<"Enter New Mobile No.";
						cin>> newMobileno;
						user1.setMobile(oldMobileno,newMobileno);
						break;
					case 5:
						exit(0);
						break;
					default :
						cout<<"Enter Valid Data !!!";
				}

			} while(1);
		else {
			cout<<"User Details are Invalid !!!";
			getch();
		}

	} while (1);
	return 0;

};