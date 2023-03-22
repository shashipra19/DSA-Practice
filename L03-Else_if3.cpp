#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter a character"<<endl;
	cin>>ch;
	if(ch>='a'&&ch<='z')
	{
		cout<<"lower Case"<<endl;
	}
	else if(ch>='A'&&ch<='Z')
	{
		cout<<"Uper Case"<<endl;
	}
	else 
	{
		cout<<"Numeric or special character"<<endl;
	}
}
