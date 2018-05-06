#include "stdio.h"


void merge(int *a, int l, int m, int r)
{

    int nLeftElements = m - l + 1;
    int nRightElements = r - m;

    int larray[nLeftElements];
    int rarray[nRightElements];

    int lindex=0;
    int rindex=0;
    int aindex=l;

    for(lindex=0; lindex<nLeftElements; lindex++)
        larray[lindex] = a[l+lindex];

    for (rindex = 0; rindex < nRightElements; rindex++)
        rarray[rindex] = a[m + rindex + 1];

    lindex = 0;
    rindex = 0;
    while ((lindex < nLeftElements) && (rindex < nRightElements))
    {
        if (larray[lindex] <= rarray[rindex])
        {
            a[aindex++] = larray[lindex++];
        }
        else
        {
            a[aindex++] = rarray[rindex++];
        }
    }

    while(lindex < nLeftElements)
    {
        a[aindex++] = larray[lindex++];
    }

    while(rindex < nRightElements)
    {
        a[aindex++] = rarray[rindex++];
    }
}

void mergesort(int *a, int l, int r)
{
    int m = 0;

    if (l < r)
    {
        m = (l + (r -1)) / 2 ;
        mergesort(a, l, m);
        mergesort(a, m+1, r);
        merge(a, l, m, r);
    }

}
int main(void)
{

    int array[] = {37, 73, 11, 4, 33, 85, 5, 6};
    int arraysize = sizeof(array) / sizeof(int);
    int ctr=0;

    mergesort(array, 0, (arraysize-1));
    printf("SORTED ARRAY\n");
    for(ctr=0;ctr<arraysize;ctr++)
    {
        printf("%d, ", array[ctr]);
    }
    
    return(0);
}