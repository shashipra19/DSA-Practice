#include<iostream>
using namespace std;
int main()
{
	int i=5;
	int *p=&i;
	int **p2=&p;
	cout<<"i  "<<i<<endl;
	cout<<"&i  "<<&i<<endl;
	cout<<"*p  "<<*p<<endl;
	cout<<"p  "<<p<<endl;
	cout<<"&p  "<<&p<<endl;
	cout<<"*p2  "<<*p2<<endl;
	cout<<"**p2  "<<**p2<<endl;
	cout<<"p2  "<<p2<<endl;
	cout<<"&p2  "<<&p2<<endl;
}
