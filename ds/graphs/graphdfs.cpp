#include <iostream>
#include <cstdio>
#include <list>
#include <stack>
 
using namespace std;


class Graph
{
    int numVertices;
    list<int> *adjList;
    stack<int> dfsStack;
    bool *visited;

public:

    Graph(int vertices);
    void addEdge(int src, int dest);
    void DFS(int startVertex);
    void printadjList(void);

};

Graph::Graph(int vertices)
{
    numVertices = vertices;
    adjList = new list<int>[vertices];
    visited = new bool[vertices];
}

void Graph::addEdge(int s, int d)
{
    adjList[s].push_front(d);
    adjList[d].push_front(s);
}

void printVisitedNodes(bool visited[], int n)
{
    for(int v = 0; v<n; v++)
    {
        cout<<"visited["<<v<<"] = "<<visited[v]<<" ";
    }
     cout<<endl; 
}
 
void Graph::DFS(int startVertex)
{
    visited[startVertex] = true;
    
    list<int> l = adjList[startVertex];
    list<int>::iterator i;

    cout<<startVertex<<", ";

    for(i = l.begin(); i!=l.end(); ++i)
    {
        if(visited[*i] == false)
        {
            DFS(*i);
        }
    }
}

void Graph::printadjList(void)
{
    list<int>::iterator i;
    for(int idx = 0; idx<numVertices;idx++)
    {
        cout<<"idx :" <<idx<<" ---> ";
        for(i = adjList[idx].begin(); i != adjList[idx].end(); ++i)
        {
            cout<<*i <<", ";
        }
        cout<<endl;
    }
}

int main(void)
{
    
    Graph g (4);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(0,2);
    g.addEdge(1,3);
    
    g.addEdge(2, 3);
    g.addEdge(3, 0);
    
    g.DFS(0);   

    return(0); 
}

