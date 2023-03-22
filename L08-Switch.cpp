#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"CALCULATOR"<<endl;
	cout<<"Enter the value of a and b"<<endl;
	cin>>a>>b;
	char op;
	cout<<"Enter the operation"<<endl;
	cin>>op;
	switch(op)
	{
		case '+':
			cout<<"a+b : "<<a+b<<endl;
			break;
		case '-':
			cout<<"a-b : "<<a-b<<endl;
			break;
		case '*':
			cout<<"a*b : "<<a*b<<endl;
			break;
		case '/':
			cout<<"a/b Quotient : "<<a/b<<" Remainder : "<<a%b<<endl;
			break;
		default:
			cout<<"Invalid Operation"<<endl;	
	}
	return 0;
}
