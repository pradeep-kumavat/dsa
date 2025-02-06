#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph{
    public:
    unordered_map<int, list<int>> adj;

    void addEdge(int u, int v, bool direction){
        //direction = 0 means undirectional
        //direction = 1 means directional

        //create an edge from u to v
        adj[u].push_back(v);

        if(direction == 0){
            //create an edge from v to u
            adj[v].push_back(u);
        }
    }

    void printAdjList(){
        for(auto i : adj){
            cout<<i.first<<"->";
            for(int j : i.second){
                cout<<j<<",";
            }
            cout<<endl;
        }
    }

};

int main()
{
    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;

    int m;
    cout<<"Enter the number of edges: ";
    cin>>m;

    graph g;

    for(int i = 0; i<m; i++){
        int u,v;
        cout<<"Enter the edges from u to v: ";
        cin>>u>>v;
        //create an undirected graph
        g.addEdge(u,v,0);
    }

    g.printAdjList();
    

    return 0;
}