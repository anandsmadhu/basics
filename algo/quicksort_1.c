#include "stdio.h"

/*Hoare's method*/

/*
This partition method is Hoare's method. Easy but degrades to O(n.sq) when array is already sorted or when array has equal elements
* More efficient that Lomuto

1. fewer swaps on average
2. creates efficient artitions when elements are equal
also degrades to n.sq. Does not produce stable sort. 

*/

void swap(int *i, int*j)
{
    int t = 0;
    t = *i; 
    *i = *j;
    *j=t;
}

int partition(int *array, int low, int high)
{
    int pivot = array[low];
    int i = low-1;
    int j = high+1;

    while(1)
    {
        do
        {
            i++;
        } while (array[i] < pivot);

        do
        {
            j--;
        } while (array[j] > pivot);

        if(i>=j)
            return(j);
        
        swap(&array[i], &array[j]);
    }
}

void quicksort(int *array, int low, int high)
{
    int pivot; 
    if (low >= high)
        return;
    pivot = partition(array, low, high);

    quicksort(array, low, pivot);
    quicksort(array, pivot+1, high);
}



int main(void)
{
    int array[] = {37, 73, 11, 4, 33, 85, 5, 6};
    int ctr = 0;
    int arraySize = sizeof(array)/sizeof(int);

    printf("UNSORTED ARRAY\n");

    for (ctr = 0; ctr<arraySize; ctr++)
    {
        printf("%d, ", array[ctr]);
    }
    printf ("\n");

    quicksort(array, 0, arraySize-1);

    printf("SORTED ARRAY \n");
    for (ctr = 0; ctr < arraySize; ctr++)
    {
        printf("%d, ", array[ctr]);
    }
    return(0);
}