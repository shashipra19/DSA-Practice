#include<iostream>
using namespace std;
int main()
{
	/*
	int arr[10];
//	arr=arr+1; //ERROR because of symbol table content cannt be change.
	cout<<arr<<endl;
	int *p=&arr[0];
	cout<<p<<endl;
	p=p+1;
	cout<<p<<endl;
	*/
	//char ch[6]="abcde";
//	char *c=&ch[0];
//	cout<<c<<endl;//Print entire string
	
	char temp='z';
	char *ptr=&temp;
	cout<<ptr<<endl;
	
	return 0;
}
