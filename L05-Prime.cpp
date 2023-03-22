#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value for checking Prime :"<<endl;
	cin>>n;
	bool isPrime=1;
	for(int i=2;i<n;i++){
		if(n%i==0)
		{
			isPrime=0;
			break;
		}
	}
	if(isPrime==0)
	{
		cout<<"Entered no. is Not Prime\a"<<endl;
	}
	else
	{
		cout<<"Entered no. is Prime"<<endl;
	}
}
