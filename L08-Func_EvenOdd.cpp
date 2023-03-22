#include<iostream>
using namespace std;
bool isEven(int a)
{
	if(a&1){
		return 0;
	}
	return 1;
}
int main()
{
	int num;
	cout<<"Enter a no."<<endl;
	cin>>num;
	if(isEven(num))
	{
		cout<<"Even"<<endl;
	}
	else
	{
		cout<<"Odd"<<endl;
	}
	return 0;
}
