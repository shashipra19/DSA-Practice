#include<iostream>
using namespace std;
int *fun(){
	int x=10;
	return &x;
}
int main()
{
	int *p=fun();
	cout<<*p;
	return 0;
}
