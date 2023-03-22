#include<iostream>
using namespace std;
void Reverse(string &str,int i, int j)
{
	cout<<"Recursive call "<<str<<endl;
	//base Case
	if(i>j)
	return;
	swap(str[i],str[j]);
	i++;
	j--;
	//Recursive call
	Reverse(str,i,j);
}
int main()
{
	string name="abcde";
	Reverse(name,0,name.length()-1);
	cout<<name<<endl;
	return 0;
}
