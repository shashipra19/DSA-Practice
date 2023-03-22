#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
	//Constructor
	Node(int data){
		this->data=data;
		this->next=NULL;
	}
};
void insertAtHead(Node* &head,int d){
	//Creat New Node
	Node* temp=new Node(d);
	temp->next=head;
	head=temp;
}

void insertAtTail(Node* &tail,int d){
	//Creat New Node
	Node* temp=new Node(d);
	tail->next=temp;
	tail=temp;
}

void insertAtPosition(Node* &tail,Node* &head,int position, int d){
	//Insert At start
	if(position==1){
		insertAtHead(head,d);
		return;
	}
/*	if(len==position-1){
		insertAtTail(tail,d);
	} */
	
	
	
	Node* temp=head;
	int cnt=1;
	while(cnt<position-1){
		temp=temp->next;
		cnt++;
	}
	
	//Insert At Last
	if(temp->next ==NULL){
		insertAtTail(tail,d);
		return;
	}
	
	//Creat New Node
	Node* nodeToInsert=new Node(d);
	nodeToInsert->next=temp->next;
	temp->next=nodeToInsert;
}

void print(Node* &head){
	Node* temp=head;
	while(temp !=NULL){
		cout<<temp->data<<" ";
		temp= temp->next;	
	}
	cout<<endl;
}
int main(){
	//created a new node
	Node*node1=new Node(10);
	
//	cout<<node1->data<<endl;
//	cout<<node1->next<<endl;
	
	//head pointed to node1
	
	Node* head=node1;
	Node* tail=node1;
	print(head);
	
/*	insertAtHead(head,12);
	print(head);
	
	insertAtHead(head,15);
	print(head);
	*/
	
	insertAtTail(tail,12);
	print(head);
	
	insertAtTail(tail,15);
	print(head);
	
	insertAtPosition(tail,head,3,22);
	print(head);
	
	cout<<"Head "<<head->data<<endl;
	cout<<"Tail "<<tail->data<<endl;
	return 0;
	
}
