#include<iostream>
using namespace std;
void print(int *arr,int s,int e){
	for(int i=s;i<=e;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
bool binarySearch(int *arr,int s,int e,int k)
{
	cout<<endl;
	print(arr,s,e);
	//Base Case
	if(s>e)
	return false;
	int mid=s+(e-s)/2;
	if(arr[mid]==k)
	return true;
	
	//R.C
	if(arr[mid]<k)
	{
		return binarySearch(arr,mid+1,e,k);
	}
	if(arr[mid]>k)
	{
		return binarySearch(arr,s,mid-1,k);
	}
}
int main()
{
	int arr[6]={12,32,34,65,69,88};
	int size=6;
	int key=69;
	int ans=binarySearch(arr,0,5,key);
	
	if(ans){
		cout<<"Key is Present"<<endl;
	}
	else{
		cout<<"Key is Absent"<<endl;
	}
}
