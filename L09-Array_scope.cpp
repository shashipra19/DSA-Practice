#include<iostream>
using namespace std;
void update(int arr[],int n)
{
	cout<<"Printing inside function"<<endl;
	arr[0]=100;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	cout<<"Going back to main"<<endl;
}

int main()
{
	int arr[3]={4,6,2};
	update(arr,3);
	for(int i=0;i<3;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}
