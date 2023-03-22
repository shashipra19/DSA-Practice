#include<iostream>
#include<queue>
using namespace std;
class node{ 
	public:
		int data;
		node* left;
		node* right;
	node(int d){//constructor
	this->data=d;
	this->left=NULL;
	this->right=NULL;	
	}	
};
void buildFromLevelOrder(node*root){
	queue<node*> q;
	cout<<"Enter data for root "<<endl;
	int data;
	cin>>data;
	root=new node(data);
	q.push(root);
	
	while(!q.empty()){
		node* temp=q.front();
		q.pop();
		cout<<"Enter left node for :"<<temp->data<<endl;
		int leftData;
		cin>>leftData;
		if(leftData!=-1){
			temp->left=new node(leftData);
			q.push(temp->left);
		}
		cout<<"Enter right node for :"<<temp->data<<endl;
		int rightData;
		cin>>rightData;
		if(rightData!=-1){
			temp->right=new node(rightData);
			q.push(temp->right);
		}
	}
}
void levelOrderTraversal(node* root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);//seperator
	
	while(!q.empty()){
		node* temp=q.front();
		q.pop();
		
		if(temp==NULL){//Old level completely traverse
			cout<<endl;
			if(!q.empty()){//Queue still have some child
				q.push(NULL);
			}
		}
		else{
			cout<<temp->data<<" ";
			if(temp->left){ //temp left non empty
				q.push(temp->left);
			}
			if(temp->right){//temp right non empty
				q.push(temp->right);
		    }
		}
	}
}
int main(){
	node* root=NULL;
	buildFromLevelOrder(root);
	cout<<endl;
//input : 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
//	levelOrderTraversal(root);
	return 0;
}
