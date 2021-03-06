#include<bits/stdc++.h>
using namespace std;

class Graph {
    int V;              // no. of vertices.
    vector<int> *adj;   // pointer to adjecency metrix.
public:
    Graph(int V){
        this->V = V;
        adj = new vector<int>[V];
    }
    void addEdge(int u, int v){
        adj[u].push_back(v);
    }
    void BFS(int s);
};
// BFS Algorithm
void Graph::BFS(int s)
{
    bool *visited = new bool[V];
    for(int i=0; i<V; i++)
        visited[i] = false;

    queue<int> q;
    visited[s] = true;
    q.push(s);
    while(!q.empty()){
        s = q.front();
        cout<<s<<" ";
        q.pop();
        for(auto i=adj[s].begin(); i!=adj[s].end(); i++)
        {
            if(!visited[*i])
            {
                visited[*i] = true;
                q.push(*i);
            }
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
        g.BFS(s);
    }
    return 0;
}
