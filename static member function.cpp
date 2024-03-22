#include<iostream>
using namespace std;
class Item
{
	int itemno;
	static int ct;
	public:
		void setitem(int ino);
		void showitem();
		static void display();
};
void Item::setitem(int ino)
{
	itemno=ino;
	ct++;
}
void Item::showitem()
{
	cout<<"\n Item no = "<<itemno;
	cout<<"\n Count = "<<ct;
}
void Item::display()
{
	 cout<<"\n Count = "<<ct;
}
int Item::ct;
int main()
{
	Item i1,i2,i3;
	Item::display();
	i1.setitem(100);
	i1.showitem();
	i2.setitem(200);
	i1.showitem();
	i2.showitem();
	i3.setitem(100);
	i1.showitem();
	i2.showitem();
	i3.showitem();
	Item::display();
}