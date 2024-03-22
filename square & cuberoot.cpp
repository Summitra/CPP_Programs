#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<math.h>
using namespace std;
class sqcbrt
{
	private:
		int n, sqroot, cbroot;
		public:
			void read();
			void put();
};
inline void sqcbrt ::read()
{
	cout<<"Enter the number:";
	cin>>n;
	sqroot = sqrt(n);
	cout<<"Square root of the number is:"<<sqroot;
}
inline void sqcbrt ::put()
{
	cout<<"Enter the number:";
	cin>>n;
	cbroot=cbrt(n);
	cout<<"Cube root of the number is:"<<cbroot;
}
int main()
{
	sqcbrt s1,s2;
	s1.read();
	s2.put();
	return 0;
}