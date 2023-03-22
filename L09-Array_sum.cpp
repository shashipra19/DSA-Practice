#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter the size of array :"<<endl;
	cin>>size;
	int arr[100];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int sum=0;
	for(int j=0;j<size;j++)
	{
		sum=sum+arr[j];
	}
	cout<<"Sum of array is "<<sum<<endl;
}
