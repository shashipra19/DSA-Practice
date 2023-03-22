#include<iostream>
using namespace std;
void print(int *arr,int n){
	cout<<"Size of array is "<<n<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	} cout<<endl;
}
bool linearSearch(int *arr,int size,int k)
{
	cout<<endl;
	print(arr,size);
	//Base Case
	if(size==0)
	return false;
	if(arr[0]==k)
	return true;
	
	//R.C
    else
	{
		return linearSearch(arr+1,size-1,k);
	}
}
int main()
{
	int arr[6]={12,32,34,65,69,88};
	int size=6;
	int key=69;
	int ans=linearSearch(arr,size,key);
	
	if(ans){
		cout<<"Key is Present"<<endl;
	}
	else{
		cout<<"Key is Absent"<<endl;
	}
}
