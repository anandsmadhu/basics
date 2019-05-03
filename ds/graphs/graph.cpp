#include <iostream>
#include <cstdio>
#include <list>
#include <stack>

#include"graph.h"
using namespace std;
Graph::Graph(int vertices)
{
    numVertices = vertices;
    adjList = new list<int>[vertices];
    visited = new bool[numVertices];
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

        for(i = adjList[currentVertex].begin(); i != adjList[currentVertex].end(); ++i)
        {
            int adjVertex = *i;
            if(visited[adjVertex] == false)
            {
                visited[adjVertex] = true;
                queue.push_back(adjVertex);
            }
        }
    }
}

void Graph::DFS(int startVertex)
{
    visited[startVertex] = true;
    
    for(int idx = 0; idx<numVertices;idx++)
        visited[idx] = false;
    
    list<int> l = adjList[startVertex];
    list<int>::iterator i;

    for(i = l.begin(); i!=l.end(); ++i)
    {
        if(visited[*i] == false)
        {
            DFS(*i);
        }
    }
    cout<<startVertex<<", ";
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

