#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;


int main(void)
{
    vector<int> intvector; // simple vector declaration
    vector<int> ivec (10, 1);

    //Accessing vector using subscript
    for(int i=0; i<10;i++)
    {
        cout << ivec[i] << endl;
    }
    //Accessing vector using subscript

    return(0);


}
