#include <iostream>
#include <string>
#include <vector>
#include <string>

#define R 4
#define C 5

using namespace std;

void printGrid(int a[][C])
{
    for (int r = 0; r<R; r++)
    {
        for (int c = 0; c<C; c++)
        {
            cout<<a[r][c]<<" ";
        }
        cout<<endl;
    }
}

void findShortestPath(int a[][C], int row, int col)
{
    static vector<int> currentPath;

    if((row == R-1) && (col == C-1))
    {
        for (int idx = 0; idx<currentPath.size(); idx++)
        {
            cout<<currentPath[idx]<<" ";
        }
        cout<<a[row][col];
        cout<<endl;
        return;
    }
    else if((row == R) || (col == C))
    {
        return;
    }
    else
    {
        currentPath.push_back(a[row][col]);
        findShortestPath(a, row, col+1);
        findShortestPath(a, row+1, col);
        currentPath.pop_back();
        return;
    }
}

int main(void)
{
    int a[R][C] = {
        {1, 2, 45, 33, 12},
        {4 ,5, 34, 76,92},
        {100, 5, 17, 82,34},
        {6, 28, 92, 87, 63},
    };

    printGrid(a);
    cout<<"------------------------"<<endl;
    findShortestPath(a, 0,0);
    return(0);


}