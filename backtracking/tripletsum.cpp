#include <iostream>
#include <string>
#include <vector>
#include <string>

using namespace std;


void tripletSum(int *a, int start, int length, int sum)
{
    static vector<int> triplet;

    if (triplet.size() == 3)
    {
        if (sum == 0)
        {
            cout << "{";
            for (int v = 0; v < triplet.size(); v++)
            {
                cout<<triplet[v]<<" ";
            }
            cout << "}"<<endl;
            /*print vector*/
            return;
        }
    }
    else
    {
        for (int idx = 0; idx < length;idx++)
        {
            triplet.push_back(a[idx]);
            tripletSum(a, idx + 1, length, sum - a[idx]);
            triplet.pop_back();
        }
    }
}



int main(void)
{
    int array[] = {2,7,4,9,5,1,3};
    int arrayLength = sizeof(array)/sizeof(array[0]);
    cout<<"Array Length = "<<arrayLength<<endl;
    int sum = 10;

    tripletSum(array, 0, arrayLength,sum);

    return(0);



}
