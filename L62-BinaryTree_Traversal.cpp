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

node* buildTree(node* root){
	cout<<"Enter the data "<<endl;
	int data;
	cin>>data;
	root=new node(data);
	if(data==-1){
		return NULL;
	}

	cout<<"Enter data for inserting in left of "<<data<<endl;
	root->left=buildTree(root->left);
	cout<<"Enter data for inserting in right of "<<data<<endl;
	root->right=buildTree(root->right);	
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
//Inorder Traversal
void Inorder(node* root){
	if(root==NULL){
		return;
	}
	//LNR
	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);
}
//Preorder Traversal
void Preorder(node* root){
	if(root==NULL){
		return;
	}
	//NLR
	cout<<root->data<<" ";
	Preorder(root->left);
	Preorder(root->right);
}
//Postrder Traversal
void Postorder(node* root){
	if(root==NULL){
		return;
	}
	//LRN
	Postorder(root->left);
	Postorder(root->right);
	cout<<root->data<<" ";
}

int main(){
	node* root=NULL;
	//Creating tree
	root=buildTree(root);
	//Input: 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
	//levelOrder Traversal
	cout<<"Printing Level order Traversal"<<endl;
	levelOrderTraversal(root);
	cout<<endl;
	cout<<"Inoder Traversal "<<endl;
	Inorder(root);
	cout<<endl;
	cout<<"Preoder Traversal "<<endl;
	Preorder(root);
	cout<<endl;
	cout<<"Postorder Traversal "<<endl;
	Postorder(root);
	return 0;
}
