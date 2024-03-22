#include<iostream>
using namespace std;
class Book
{
	char T[20];
	int P;
	public:
		void accept(char title[20],int price);
//			cout<<"\n Enter the title of the book:";
//			cin>>title;
//			cout<<"\n Enter the price of the book:";
//			cin>>price;
		
		void display();
//		{
//			cout<<"\n Title = "<<title;
//			cout<<"\n Price ="<<price;
//		}
};
void Book::accept(char title[20], int price)
{
	T= title;
	P= price;
}
void Book::display()
{
	cout"\n Title of the book = "<<T;
	cout<<"\n Price of the book ="<<P;
}
int main()
{
	Book b1, b2, b3, b4, b5;
	b1.accept(aaa,200);
	b2.accept(bbb,150);
	b3.accept(ccc,250);
	b4.accept(ddd,300);
	b5.accept(rrr, 400);
	cout<<"Information of first book:";
	b1.display();
	cout<<"Information of the second book:";
	b2.display();
	cout<<"Information of third book:";
	b3.display();
	cout<<"Information of fourth book:";
	b4.display();
	cout<<"Information of fifth book:";
	b5.display();
	return 0;
//	cout<<"\n Information of first book :";
//	b1.accept();
//	b1.display();
//	cout<<"\n Information of second book :";
//	b2.accept();
//	b2.display();
//	cout<<"\n Information of the third book:";
//	b3.accept();
//	b3.display();
//	cout<<"\n Information of fourth book:";
//	b4.accept();
//	b4.display();
//	cout<<"\n Information of the fifth book:";
//	b5.accept();
//	b5.display();
	return 0;
}