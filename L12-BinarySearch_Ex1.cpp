#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key)
{
	int start=0;
	int end=size-1;
	int mid=start+(end-start)/2;
	while(start<=end)
	{
		if(arr[mid]==key){
			return mid;
		}
		//go to right part from mid
		if(key>arr[mid]){
			start=mid+1;
		}
		//go to left part from mid
		//if(key<arr[mid]
		else{
			end=mid-1;
		}
		mid=start+(end-start)/2;	
	}
	return -1;
}
int main()
{
    int even[6]={2,5,6,9,12,17};
	int odd[5]={3,5,8,10,13};
	int key,key2;
	cout<<"Enter Key for even array"<<endl;
	cin>>key;
	int EVEN=binarySearch(even,6,key);
	cout<<"Index of even array for key "<<key<<" is "<<EVEN<<endl;
	
	cout<<"Enter Key for odd array"<<endl;
	cin>>key2;
	int ODD=binarySearch(odd,5,key);
	cout<<"Index of odd array for key "<<key2<<" is "<<ODD<<endl; 
 
	return 0;
}
