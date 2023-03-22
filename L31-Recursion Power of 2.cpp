#include<iostream>
using namespace std;
int power(int a){
	if(a==0){
		return 1;
	}
	return 2*power(a-1);
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	cout<<"Value of 2^"<<i<<" is "<<(long long)power(i)<<endl;
	}
	
	return 0;
}
