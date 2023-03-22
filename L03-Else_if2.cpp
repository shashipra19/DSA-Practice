#include<iostream>
using namespace std;
int main()
{
	int a=2;
	int b=a+1;
	if((a=3)==b)
	{
		cout<<"if cond "<<a<<endl;
	}
	else
	{
		cout<<"else cond "<<a+1<<endl;
	}
}
