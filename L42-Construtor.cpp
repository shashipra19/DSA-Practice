#include<iostream>
using namespace std;

class Hero{
	//properties
	private:
	int health;
	public:
	char *name;
	char level;

	//by default Constructor
	Hero(){
		cout<<"Constructor Called"<<endl;
	}

	//Paremeterised Constructor
	Hero(int health, char level){
	//	cout<<"this->"<<this<<endl;
		this->health=health;
		this->level=level;
	}
	//Copy Constructor
	Hero(Hero& temp){
		cout<<"Copy Constructor Called"<<endl;
		this->health=temp.health;
		this->level=temp.level;
	}
	void setHealth(int h){
		health=h;
	}
	int getHealth(){
		return health;
	}
	void setName(char name[]){
		strcpy(this->name,name);
	}
	void print(){		
		cout<<"name "<<this->name<<endl;
		cout<<"health "<<this->health<<endl;
		cout<<"level "<<this->level<<endl<<endl;
	
	}
};
int main(){
	//creation of Object
	Hero R(10,'R');//Static allocation
	R.print();
	//Copy Constructor
	Hero S(R);
	S.print();
	return 0;
}
