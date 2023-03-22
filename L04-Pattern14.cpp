#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int row=1;
	while(row<=n){
		int col=1;
		char start='A'+n-row;
		while(col<=row)
		{
			cout<<start<<" ";
			start++;
			col++;
		}
		cout<<endl;
		row++;
	}
}
