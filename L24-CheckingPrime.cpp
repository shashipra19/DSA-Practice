#include<iostream>
using namespace std;
bool IsPrime(int n){
	if(n<=1){
		return false;
	}
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main()
{
	int n;
	cin>>n;
	if(IsPrime(n)){
		cout<<"Prime No.";
	}
	else
	{
		cout<<"Not Prime";
	}
	return 0;
}
