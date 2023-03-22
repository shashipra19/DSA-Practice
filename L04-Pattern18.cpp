#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int row=1;
	while(row<=n){
		//print space
		int space=n-row;
		while(space){
			cout<<" ";
			space--;
		}
		//print 1st triangle 
		int col=1;
		while(col<=row){
			cout<<col;
			col++;
		}
		//print 2nd triangle
		int start=row-1;
		while(start)
		{
			cout<<start;
			start--;
		}
		cout<<endl;
		row++;
	}
}
