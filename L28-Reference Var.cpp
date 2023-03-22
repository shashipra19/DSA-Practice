#include<iostream>
using namespace std;
void update1(int n)
{
	n++;
	cout<<"In function "<<n<<endl;
	
}
void update2(int& n)
{
	n++;
	cout<<"In function "<<n<<endl;
	
}
int main()
{
	int n=5;
	cout<<"Before "<<n<<endl;
	update1(n);
	cout<<"After update1 "<<n<<endl;
	update2(n);
	cout<<"After update2 "<<n<<endl;
	return 0;
}
