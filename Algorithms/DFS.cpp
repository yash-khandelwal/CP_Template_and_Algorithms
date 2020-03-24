#include<bits/stdc++.h>
using namespace std;
class Graph {
    int V;              // no. of vertices.
    vector<int> *adj;   // pointer to adjecency metrix.
    bool *visited;
public:
    Graph(int V){
        this->V = V;
        adj = new vector<int>[V];
        visited = new bool[V];
        refresh();
    }
    void addEdge(int u, int v){
        adj[u].push_back(v);
    }
    void refresh(void){
        for(int i=0;i<V;i++)
        {
            visited[i] = false;
        }
    }
    void DFS(int s);
};
// DFS Algorihtm
void Graph::DFS(int s)
{
    visited[s] = true;
    cout<<s<<" ";
    for( auto i=adj[s].begin(); i!=adj[s].end(); i++)
    {
        if(!visited[*i]){
            DFS(*i);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        Graph g = Graph(n);
        while(m--)
        {
            int u,v;
            cin>>u>>v;
            g.addEdge(u, v);
        }
        int s;
        cin>>s;
        g.DFS(s);
    }
    return 0;
}
