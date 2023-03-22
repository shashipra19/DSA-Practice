#include<iostream>
using namespace std;
int main()
{
	int n;
	int fact=1,i;
	cout<<"Enter a no. for factorial"<<endl;
	cin>>n;
	i=n;
	while(i>=1)
	{
	fact=fact*i;
	i--;
	}
	cout<<"Factorial of "<<fact<<endl;
	return 0;
}
