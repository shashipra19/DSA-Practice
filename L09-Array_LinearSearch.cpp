#include<iostream>
using namespace std;
bool Search(int arr[],int size,int key)
{
	for(int i=0;i<size;i++){
	if(arr[i]==key)
	{
		return 1;
	}	
  }
  return 0;
}
int main()
{
	int arr[10]={12,14,17,0,-11,12,15,18,-21,19};
	cout<<"Enter the search element "<<endl;
	int key;
	cin>>key;
	bool found=Search(arr,10,key);
	if(found){
		cout<<"Key element is PRESENT in this array"<<endl;
	}
	else{
		cout<<"Key element is ABSENT in this array"<<endl;
	}
	return 0;
}
