#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value for fibonacci serise :"<<endl;
	cin>>n;
	int a=0,b=1;
	cout<<a<<" "<<b<<" ";
	for(int i=1;i<=n;i++){
		int nextNo=a+b;
		cout<<nextNo<<" ";
		a=b;
		b=nextNo;
	}
}
