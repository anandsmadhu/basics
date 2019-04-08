#include "stdio.h"

void swap(int *i, int*j)
{
    int t = 0;
    t = *i; 
    *i = *j;
    *j=t;
}

void printArray(int array[], int arraySize)
{
    int idx=0;

    printf("**** ARRAY CONTENTS****\n");

    for(idx=0;idx<arraySize;idx++)
        printf("%d ", array[idx]);
    
    printf("\n");
    printf("**** ARRAY CONTENTS****\n");
}

void minHeapify(int array[], int arraySize, int i)
{
    int smallest = i;
    int leftChild = (2*i) + 1;
    int rightChild = (2*i) + 2;

    if((leftChild < arraySize) && (array[leftChild]< array[smallest]))
        smallest = leftChild;
    if((rightChild < arraySize) && (array[rightChild]< array[smallest]))
        smallest = rightChild;
    
    if(smallest != i)
    {
        swap(&array[i], &array[smallest]);
        minHeapify(array, arraySize, smallest);
    }    
}

void maxHeapify(int array[], int arraySize, int i)
{
    int largest = i;
    int leftChild = (2*i) + 1;
    int rightChild = (2*i) + 2;

    if((leftChild < arraySize) && (array[leftChild]> array[largest]))
        largest = leftChild;
    if((rightChild < arraySize) && (array[rightChild]> array[largest]))
        largest = rightChild;
    
    if(largest != i)
    {
        swap(&array[i], &array[largest]);
        maxHeapify(array, arraySize, largest);
    }
}

void minHeapSort(int array[], int arraySize)
{
    int i;

    //printf("maxHeapSort : arraySize = %d\n", arraySize);

    for(i = (arraySize/2) -1; i>=0; i--)
        minHeapify(array, arraySize, i);
}

void maxHeapSort(int array[], int arraySize)
{
    int i;

    //printf("maxHeapSort : arraySize = %d\n", arraySize);

    for(i = (arraySize/2) -1; i>=0; i--)
        maxHeapify(array, arraySize, i);
}



int main(void)
{

    int array[] = {37, 73, 11, 4, 33, 85, 5, 6};
    //int array[] = {4, 33, 85};
    //int array[] = {1,12,9,5,6,10};
    int arraysize = sizeof(array) / sizeof(int);
    
    maxHeapSort(array, (arraysize));
    printf("MAX HEAP SORT : SORTED ARRAY\n");
    printArray(array, arraysize);
    
    minHeapSort(array, (arraysize));
    printf("MIN HEAP SORT : SORTED ARRAY\n");
    printArray(array, arraysize);    

    
    return(0);
}