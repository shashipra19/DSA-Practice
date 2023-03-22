#include<bits/stdc++.h>
using namespace std;

int main(){
	//creation of stack
	stack<int> s;
	//push element
	s.push(10);
	s.push(20);
	s.push(30);
	//pop element
	s.pop();
	cout<<"Size of stack "<<s.size()<<endl;
	
	if(s.empty()){
		cout<<"Stack is Empty"<<endl;
	}
	else{
		cout<<"Stack is NOT Empty"<<endl;
	}
	cout<<"Top element "<<s.top()<<endl;
}
