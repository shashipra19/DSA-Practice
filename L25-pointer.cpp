#include<iostream>
using namespace std;
int main()
{
	int num=5;
	int *ptr=&num;
	cout<<"Value of num is "<<num<<endl;
	cout<<"Address of num is &num "<<&num<<endl;
	cout<<"Value in ptr is *ptr "<<*ptr<<endl;
	cout<<"Address store in ptr is ptr"<<ptr<<endl;
	cout<<"Address of  ptr is &ptr "<<&ptr<<endl;
	cout<<"Size of  ptr is "<<sizeof(ptr)<<endl;
	cout<<"Size of  value store in ptr is "<<sizeof(*ptr)<<endl;
	return 0;
}
