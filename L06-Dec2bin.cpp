#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a no. for Decimal to Binary Conversion: "<<endl;
	cin>>n;
	int ans=0,i=0;
	while(n!=0){
		int bit=n&1;
		ans=(bit*pow(10,i))+ans;
		n=n>>1;
		i++;
	}
	cout<<"Decimal to Binary is : "<<ans<<endl;
}

