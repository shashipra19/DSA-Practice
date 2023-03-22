#include<iostream>
using namespace std;

class Hero{
	//properties
	public:
	char level;
	int health;
	void print(){
		cout<<level<<endl;
	}
};
int main(){
	//creation of Object
	Hero Paul;
	Paul.health=70;
	Paul.level='A';
	cout<<"Health is "<<Paul.health<<endl;
	cout<<"Level is "<<Paul.level<<endl;
	
	
//	cout<<"Size of h1 "<<sizeof(h1)<<endl;
	return 0;
}
