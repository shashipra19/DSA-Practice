#include<iostream>
using namespace std;
class A{
	public:
		void func(){
			cout<<"Class A Invoke"<<endl;
		}
};
class B{
	public:
		void func(){
			cout<<"Class B Invoke"<<endl;
		}
};
class C: public A, public B{
	
};
/* class D:public A{
	public:
		void func(){
			cout<<"Class D Invoke"<<endl;
		}
}; */
int main(){
	C obj;
	obj.A::func();
	obj.B::func();
	
/*  D objD;
    objD.func();// Function inside  */ 
	return 0;
}
