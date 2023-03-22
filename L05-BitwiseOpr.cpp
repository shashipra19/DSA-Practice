#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the value of a and b"<<endl;
	cin>>a>>b;
	cout<<"a&b="<<(a&b)<<endl;
	cout<<"a|b="<<(a|b)<<endl;
	cout<<"~a="<<(~a)<<endl;
	cout<<"a^b="<<(a^b)<<endl;
	
	cout<<"(17>>1)="<<(17>>1)<<endl;
	cout<<"(17>>1)="<<(17>>2)<<endl;
	cout<<"(19<<1)="<<(19<<1)<<endl;
	cout<<"(19>>2)="<<(19<<2)<<endl;
}
