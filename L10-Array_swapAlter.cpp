#include<iostream>
using namespace std;
void swapAlter(int arr[],int size)
{
	for(int i=0;i<size;i=i+2)
	{
		if(i+1<size)
		{
			swap(arr[i],arr[i+1]);
		}
	}
}
void printArr(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int even[6]={3,-2,8,7,9,1};
	int odd[5]={2,-5,3,7,4};
	cout<<"Given even array :"<<endl;
	printArr(even,6);
	swapAlter(even,6);
	cout<<"Swaped even array :"<<endl;
	printArr(even,6);
	cout<<"Given odd array :"<<endl;
	printArr(odd,5);
	swapAlter(odd,5);
	cout<<"Swaped odd array :"<<endl;
	printArr(odd,5);
	return 0;
	
}
