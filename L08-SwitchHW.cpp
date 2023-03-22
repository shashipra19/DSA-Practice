#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the amount"<<endl;
	cin>>n;
	int Rs100,Rs50,Rs20,Rs1;
	switch(1)
	{
		case 1:
			Rs100=n/100;
			n=n%100;
			cout<<"No. of hundred notes : "<<Rs100<<endl;
		case 2:
		    Rs50=n/50;
			n=n%50;
			cout<<"No. of fifty notes : "<<Rs50<<endl;
		case 3:
			Rs20=n/20;
			n=n%20;
			cout<<"No. of twenty notes : "<<Rs20<<endl;
		case 4:
			Rs1=n/1;
			n=n%1;
			cout<<"No. of one notes : "<<Rs1<<endl;
	}
	cout<<"Total no. of Notes : "<<Rs100+Rs50+Rs20+Rs1<<endl;
	return 0;
}
