#include <iostream>
#include <climits>

using namespace std;


void swap(int *i, int*j)
{
    int t = 0;
    t = *i; 
    *i = *j;
    *j=t;
}

class Heap
{
    int *heapArray;
    int capacity;
    int heapSize;

public:
    Heap(int capacity);
    void minHeapify(int index);

    int getParent(int node) {return ((node-1)/2);}
    int getLeftChild(int node) {return ((node*2) + 1);}
    int getRightChild(int node){return ((node*2) + 2);}

    int extractMin();
    int getMin() {return(heapArray[0]);}

    void deleteKey(int index);
    void insertKey(int index);
};

Heap::Heap(int heapCapacity)
{
    heapSize = 0;
    capacity = heapCapacity;
    heapArray = new int[capacity];
}

void Heap::minHeapify(int index)
{

    int smallest = index;
    int leftChild = getLeftChild(index);
    int rightChild = getRightChild(index);

    if((index < heapSize) && (heapArray[leftChild]< heapArray[index]))
        smallest = leftChild;
    
    if((index < heapSize) && (heapArray[rightChild]< heapArray[index]))
        smallest = rightChild;
    
    if(smallest != index)
    {
        swap(&heapArray[index], &heapArray[smallest]);
        minHeapify(smallest);
    }
}

int Heap::extractMin()
{
    int minimum;
    if(heapSize <0)
        return INT_MAX;
    
    if(heapSize == 1)
    {
        heapSize = 0;
        return(heapArray[0]);
    }

    int minimum = heapArray[0];

    heapArray[0] = heapArray[size-1];
    heapSize--;
    minHeapify(0);

    return(minimum);
}

void Heap::insertKey(int index)
{
    
}

void Heap::deleteKey(int index)
{

}

