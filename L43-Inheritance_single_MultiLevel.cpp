#include<iostream>
using namespace std;
class Animal{
	public:
		int weight;
		int age;
		public:
		void speak(){
			cout<<"Speaking..."<<endl;
		}	
};
class Dog: public Animal{
	
};
class BullDog: public Dog{
	
};
int main(){
	Dog d1;
	cout<<d1.age<<endl;
	d1.speak();
	
	BullDog b1;
	b1.speak();
	return 0;
}
