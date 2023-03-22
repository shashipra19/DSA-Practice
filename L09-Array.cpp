#include<iostream>
using namespace std;
void printArray(int arr[],int size)
{
	cout<<"Printing Array"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	cout<<endl<<"Array without value "<<endl;
	int firstArray[15];
	cout<<"Value in index 6 is "<<firstArray[6]<<endl;
	
	cout<<endl<<"Array with full size element value "<<endl;
	int second[3]={4,6,2};
	cout<<"Value in second[0] "<<second[0]<<endl;
	cout<<"Value in second[1] "<<second[1]<<endl;
	cout<<"Value in second[2] "<<second[2]<<endl;
	
	cout<<endl<<"Array with partial size element value "<<endl;
	int third[15]={5,6,23};
	for(int i=0;i<15;i++)
	{
		cout<<"Value in index "<<i<<" is "<<third[i]<<endl;
	}
	cout<<endl<<"Array intialising all location with zero "<<endl;
	int forth[10]={0};
	for(int i=0;i<10;i++)
	{
		cout<<forth[i]<<" ";
	}
	cout<<endl<<"Array not intialising all location with 1"<<endl;
	int fifth[10]={1};
	printArray(fifth,10);
	cout<<endl<<"Array intialising all location with 1"<<endl;
	int six[20];
	for(int i=0;i<20;i++)
	{
		six[i]=1;
		cout<<six[i]<<" ";
	}
	cout<<endl<<"Printing character array"<<endl;
	char ch[5]={'a','c','s','p','x'};
	for(int i=0;i<5;i++)
	{
		cout<<ch[i]<<" ";
	}
	return 0;
	
}
