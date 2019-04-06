#include "stdio.h"

void swap(int *i, int*j)
{
    int t = 0;
    t = *i; 
    *i = *j;
    *j=t;
}

int partition(int *array, int low, int high)
{
    int i = low -1;
    int pivot = array[high];
    int j = 0;
    
    for (j = low; j<=(high-1); j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return(i+1);
}


void quicksort(int *array, int low, int high)
{
    int pivot; 
    if (low >= high)
        return;
    if(low < high)
        pivot = partition(array, low, high);

    quicksort(array, low, pivot-1);
    quicksort(array, pivot, high);
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