#include <iostream>
#include <cstdio>
#include <list>
 
using namespace std;


class Graph
{
    int numVertices;
    list<int> *adjList;
    bool *visited;

    public:

    Graph(int vertices);
    void addEdge(int src, int dest);
    void BFS(int startVertex);
    void printadjList(void);

};

Graph::Graph(int vertices)
{
    numVertices = vertices;
    adjList = new list<int>[vertices];
}

void Graph::addEdge(int s, int d)
{
    adjList[s].push_back(d);
    adjList[d].push_back(s);
}

void printVisitedNodes(bool visited[], int n)
{
    for(int v = 0; v<n; v++)
    {
        cout<<"visited["<<v<<"] = "<<visited[v]<<" ";
    }
     cout<<endl; 

}

void Graph::BFS(int startVertex)
{
    
    visited = new bool[numVertices];
    for(int idx = 0; idx<numVertices;idx++)
        visited[idx] = false;
    
    list<int> queue;

    // visit the startVertex
    visited[startVertex] = true;

    // add the vertex just visited to the queue
    queue.push_back(startVertex);
    

    list<int>::iterator i;

    while(!(queue.empty()))
    {
        int currentVertex = queue.front();
        cout<<currentVertex<<", "<<endl;
        queue.pop_front();

        //printVisitedNodes(visited, numVertices);

        for(i = adjList[currentVertex].begin(); i != adjList[currentVertex].end(); ++i)
        {
            int adjVertex = *i;
            if(visited[adjVertex] == false)
            {
                //printVisitedNodes(visited, numVertices);
                visited[adjVertex] = true;
                queue.push_back(adjVertex);
            }
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

    //g.printadjList();

    
    g.BFS(0);   

    return(0); 


}

