#include<iostream>
using namespace std;
int getMin(int num[],int n)
{
	int mini=INT_MAX;
	for(int i=0;i<n;i++)
	{
	/*	if(num[i]<min)
		{
			min=num[i];
		}
		*/
		mini=min(mini,num[i]);
	}
	return mini;
}
int getMax(int num[],int n)
{
	int maxa=INT_MIN;
	for(int i=0;i<n;i++)
	{
	/*	if(num[i]>max)
		{
			max=num[i];
		}
		*/
		maxa=max(maxa,num[i]);
	}
	return maxa;
}
int main()
{
	int size;
	cin>>size;
	int num[100];
	for(int i=0;i<size;i++)
	{
		cin>>num[i];
	}
	cout<<"Min Element of array is "<<getMin(num,size)<<endl;
	cout<<"Max Element of array is "<<getMax(num,size)<<endl;
	return 0;
	
}
