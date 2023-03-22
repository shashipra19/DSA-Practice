#include<iostream>
using namespace std;
class Human{
	public:
		int height;
		int age;
		int weight;
	
	int getAge(){
		return this->age;
	}
	void setweight(int w){
		this->weight=w;
	}	
};
/*class Male: public Human{ //Public Access drived class
	public:
		string color;
	
	void sleep(){
		cout<<"Male Sleeping"<<endl;
	} 	
}; */
class Male: protected Human{ //Protected Access drived class
	public:
		string color;
	
	void sleep(){
		cout<<"Male Sleeping"<<endl;
	} 
	int getHeight(){
		return this->height;
	}	
}; 

int main(){
/*	Male Object1;
	cout<<Object1.age<<endl;
	cout<<Object1.height<<endl;
	cout<<Object1.weight<<endl;
	
	cout<<Object1.color<<endl;
	Object1.sleep();
	Object1.setweight(75);
	cout<<Object1.weight<<endl;
	*/
	
	Male m1;
	cout<<m1.getHeight();
	return 0;
}
