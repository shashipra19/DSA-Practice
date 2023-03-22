#include<bits/stdc++.h>
using namespace std;
class Stack{
	public:
		//properties
		int size;
		int top;
		int *arr;
		//behaviours
		Stack(int size){
			this->size=size;
			top=-1;
			arr=new int[size];
		}
		void push(int element){
			if(size-top>1){
				top++;
				arr[top]=element;
			}
			else{
				cout<<"Stack OverFlow "<<endl;
			}
		}
		void pop(){
			if(top>=0){
				top--;
			}
			else{
				cout<<"Stack UnderFlow "<<endl;
			}
		}
		int peek(){
			if(top>=0){
				return arr[top];
			}
			else{
				cout<<"Stack is Empty "<<endl;
			}
		}
		bool isEmpty(){
			if(top==-1){
				return true;
			}
			else{
				return false;
			}
		}
};

int main()
{
	//Creating stack
	Stack st(5);
	cout<<"Is empty "<<st.isEmpty()<<endl;
	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);
	cout<<"Top "<<st.peek()<<endl;
	st.pop();
	cout<<"Top "<<st.peek()<<endl;
	cout<<"Is empty "<<st.isEmpty()<<endl;
	return 0;
}

