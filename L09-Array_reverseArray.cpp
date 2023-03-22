#include<iostream>
using namespace std;
void reverse(int arr[],int n)
{
	int start=0;
	int end=n-1;
	while(start<=end)
	{
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
	cout<<endl;
}
void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int size;
	cout<<"Enter the size of array :"<<endl;
	cin>>size;
	int arr[100];
	cout<<"Enter the array "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	reverse(arr,size);
	printArray(arr,size);
	return 0;
}
