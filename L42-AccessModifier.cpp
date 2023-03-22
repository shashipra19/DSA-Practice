#include<iostream>
using namespace std;

class Hero{
	//properties
	private:
	int health;
	public:
	char level;
	Hero(){
		cout<<"Constructor Called"<<endl;
	}
	void setHealth(int h){
		health=h;
	}
	int getHealth(){
		return health;
	}
};
int main(){
	//creation of Object
	Hero Paul;//Static allocation
	Paul.setHealth(60);
	Paul.level='A';
	cout<<"Health is "<<Paul.getHealth()<<endl;
	cout<<"Level is "<<Paul.level<<endl;
	
	Hero *h1=new Hero;//Dynamically allocation
	h1->setHealth(70);
	h1->level='B';
	cout<<"Health is "<<(*h1).getHealth()<<endl;
	cout<<"Level is "<<(*h1).level<<endl;
	//Other way
	cout<<"Health is "<<h1->getHealth()<<endl;
	cout<<"Level is "<<h1->level<<endl;
	
	
//	cout<<"Size of h1 "<<sizeof(h1)<<endl;
	return 0;
}
