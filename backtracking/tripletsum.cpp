#include <iostream>
#include <string>
#include <vector>
#include <string>

using namespace std;

int tripletSum(vector<int> trip)
{
    int sum=0;
    for(int idx = 0; idx<trip.size(); idx++)
    {
        sum = sum + trip[idx];
    }
    return(sum);
}

void tripletSum(int *a, int start, int length, int sum)
{
    static vector<int> triplet;

    if (start == length)
    {
        if ((triplet.size() == 3) && (tripletSum(triplet) <= sum))
        {
           cout<<"{";
           for(int idx = 0; idx<3; idx++)
           {
               cout<<triplet[idx];

           }
           cout << "}"<<endl;
        }
    }
    else
    {
        tripletSum(a, start + 1, length, sum);
        triplet.push_back(a[start]);
        tripletSum(a, start + 1, length, sum);
        triplet.pop_back();
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
