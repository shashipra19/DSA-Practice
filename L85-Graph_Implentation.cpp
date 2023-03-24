#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
template <typename T>

class graph{
	public:
		unordered_map<T, list<T>> adj;
		
		void addEdge(T u,T v,bool direction){
			//direction=0 -> undirected graph
			//direction=1 -> directed graph
			
			//Create an edge from u to v
			adj[u].push_back(v);
			if(direction==0){
				adj[v].push_back(u);
			}
		}
		
		void printAdjList(){
			for(auto i:adj){
				cout<<i.first<<"-> ";
				for(auto j:i.second){
					cout<<j<<", ";
				}
				cout<<endl;
			}
		}
};
int main(){
	int n;
	cout<<"Enter the no. of nodes "<<endl;
	cin>>n;
	
	int m;
	cout<<"Enter the no. of edges "<<endl;
	cin>>m;
	
	graph<int> g;
	
	for(int i=0;i<m;i++){
		int u,v;
		cin>>u>>v;
		//Creating undirected Graph
		g.addEdge(u,v,0);
		
	}
	//printing graph
	g.printAdjList();
	
	return 0;
	
	/*
	e.g
	i/p:
	n=5,m=6
	edges
	0 1
	1 2
	1 3
	2 3
	3 4
	4 0
	
	o/p
	4-> 3, 0,
    3-> 1, 2, 4,
    2-> 1, 3,
    1-> 0, 2, 3,
    0-> 1, 4,
	 */
	
}
