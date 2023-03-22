#include<bits/stdc++.h>
using namespace std;
int main(){
	queue<int> q;
	q.push(12);
	q.push(14);
	q.push(16);	
	q.push(18);	
	q.push(20);
	cout<<"Size of queue is "<<q.size()<<endl;
	cout<<"Front element of queue is "<<q.front()<<endl;	
	q.pop();
	q.pop();
	cout<<"Size of queue is "<<q.size()<<endl;
	cout<<"Front element of queue is "<<q.front()<<endl;
	
	if(q.empty())
	{
		cout<<"Queue is empty"<<endl;
		}
		else{
			cout<<"Queue is not empty"<<endl;
		}	

	return 0;
}
