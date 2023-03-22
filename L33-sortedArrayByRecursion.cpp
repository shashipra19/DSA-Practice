#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
	//base Case
	if(size==0||size==1)
	   return true;
	   
	   if(arr[0]>arr[1])
	   return false;
	   
	   else
	   return isSorted(arr+1,size-1);
}
int main()
{
	int arr[10]={12,23,54,56,76,79};
	int size=6;
	bool ans=isSorted(arr,size);
	if(ans){
		cout<<"Array is sorted"<<endl;
	}
	else{
		cout<<"Array is NOT sorted"<<endl;
	}
}
