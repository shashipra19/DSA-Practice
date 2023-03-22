#include<iostream>
using namespace std;
bool isPrime(int a)
{
	for(int i=2;i<a;i++){
	if(a%i==0){
		return 0;
    }
	return 1;
 }
}
int main()
{
	int num;
	cout<<"Enter a no."<<endl;
	cin>>num;
	if(isPrime(num))
	{
		cout<<"Prime"<<endl;
	}
	else
		cout<<"Not Prime"<<endl;
	return 0;
}
