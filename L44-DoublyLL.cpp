#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* prev;//Creating pointer
		Node* next;
		//Constructor
		Node(int d){
			this->data=d;
			this->prev=NULL;
			this->next=NULL;
		}
};
//Traverse Linked List
void print(Node* head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
//Length of Linked List
int getLength(Node* head){
	int len=0;
	Node* temp=head;
	while(temp!=NULL){
		len++;
		temp=temp->next;
	}
	return len;
}


int main(){
	Node* node1=new Node(10);
	Node* head=node1;
	print(head);
	cout<<"Length of LL "<<getLength(head)<<endl;
	return 0;
}
