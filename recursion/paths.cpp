#include <iostream>
#include <string>
#include <vector>
#include <string>

#define R 2
#define C 3

using namespace std;


int countPaths(int grid[][C], int row, int col)
{
    if((row ==R-1) && (col ==C-1))
        return(1);

    if ((row > R) || (col > C))
        return (0);

    int right = countPaths(grid, row, col + 1);
    int down = countPaths(grid, row+1, col );

    return(right + down);

}

int main(void)
{
    int grid[R][C];
    int numPaths = countPaths(grid, 0,0);
    cout<<"No of Paths = "<<numPaths<<endl;
    return(0);

}