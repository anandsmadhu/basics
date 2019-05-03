#include <iostream>
#include <cstdio>
#include <list>
#include <stack>
using namespace std;
class Graph
{
    int numVertices;
    list<int> *adjList;
    bool *visited;

public:

    Graph(int vertices);
    void addEdge(int src, int dest);
    void DFS(int startVertex);
    void BFS(int startVertex);    
    void printadjList(void);

};

