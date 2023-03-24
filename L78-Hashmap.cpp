
#include<iostream>
#include<map>
#include<unordered_map>
//#include<bits/stdc++.h>
using namespace std;
int main(){
//creation
	unordered_map<string,int> m;

//insertion
	//1st way
	pair<string,int> pair1=make_pair("Shashi",3);
	m.insert(pair1);
	
	//2nd way
	pair<string,int> pair2("Pratap",2);
	m.insert(pair2);
	//3rd way
	m["mera"]=1;
	//what will happen
	m["mera"]=2;

//Searching
  cout<<m["mera"]<<endl;
  cout<<m.at("Shashi")<<endl;

  // cout<<m.at("UnknownKey")<<endl; //invalid ERROR
  cout<<m["UnknownKey"]<<endl;//key created with 0 entry
  cout<<m.at("UnknownKey")<<endl;//now valid

//size
  cout<<"Size of map is "<<m.size()<<endl;

  //To check key is present or not
  cout<<m.count("Bro")<<endl;
  cout<<m.count("Shashi")<<endl;


//To acces all key and values
  //1st way
  for(auto i:m)
    cout<<i.first<<" "<<i.second<<endl;

//Erase
  m.erase("Shashi");
  cout<<"Size after erasing key "<<m.size()<<endl;
  
  //2nd way Iterator
  unordered_map<string, int> :: iterator it =m.begin();
  while(it!=m.end()){
    cout<<it->first<<" "<<it->second<<endl;
    it++;
  }
	cout<<"All Right!";
	return 0;
}
