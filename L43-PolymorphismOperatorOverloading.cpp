#include<iostream>
using namespace std;
class B{
	public:
		int a;
		int b;
	int add(){
		return a+b;
	}	
	void operator+ (B &obj){
		int value1=this->a;
		int value2=obj.a;
		cout<<"Output "<<value2-value1<<endl;
	}
	void operator() (){
		cout<<"I am Small Bracket"<<endl;
	}
};
int main(){
	/*B obj;
	obj.a=1;
	obj.b=2;
	cout<<obj.add()<<endl;*/
	
	B obj1,obj2;
	obj1.a=3;
	obj2.a=7;
	obj1+obj2;
	
	obj1();
	return 0;
}
