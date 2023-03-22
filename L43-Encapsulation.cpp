#include<iostream>
using namespace std;
class Student{
	private:
		string name;
		int roll_no;
		int age;
	public:
		int getAge(){
		return this->age;
	}
		void setAge(int a){
			this->age=a;
		}		
};
int main()
{
	Student Shashi;
	Shashi.setAge(5);
	cout<<Shashi.getAge();
	return 0;
}
