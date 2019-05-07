#include <iostream>


/*How many ways can you climb the stairs*/


int countWaysWrapper(int N, vector<int> steps)
{
    if(N==0)
        return(0);
    countWays(N, steps);
}

int countWays(int N, int vector<int> steps)
{

    int result;
    if((N==0))
        return(1);
    
    for(int idx=0; idx<steps.size(); idx++)
    {
        result = result + countWays(N-step[idx], steps);
    }
    return(result);
}

int main(void)
{
    int step[] = {1,2};
    int N = 15;
}