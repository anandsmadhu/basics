#include <iostream>
#include <string>
#include <vector>
#include <string>

using namespace std;



/* 
 printSet(char *subset, int j)
 {
     // handle j = 0 - empty set
     if(j ==0)
     {
         cout<<"{ }"<<endl;

     }
     else
     {
        cout<<"{";
        for(int idx = 0; idx<j; idx++)
        {
            cout<<subset[idx];
            if(idx !=j-1)
                cout<<",";
        }
        cout<<"}"<<endl;
     }
}
 */
/* void generateSubsets(char *s, int i, char  *subset, int j)
{
    int l = sizeof(s) / sizeof(s[0]);

    if(l == i)
    {
        //print
        printSet(subset, j);
    }
    else
    {
        generateSubsets(s, i+1, subset,j);
        subset[j] = s[i];
        generateSubsets(s, i+1, subset,j+1);
    }
    


    

}
 */

void subsets(int *a, int idx, int arrayLength)
{
    static vector<int> answer;

    if(idx == arrayLength)
    {
        // print answer
        cout<<"{";
        for(int i = 0; i<answer.size(); i++)
        {
            cout<<answer[i];
            if(i !=answer.size()-1)
                cout<<",";
        }
        cout<<"}"<<endl;
        return;
    }
    else
    {
        subsets(a, idx+1, arrayLength);
        answer.push_back(a[idx]);
        subsets(a, idx+1, arrayLength);
        answer.pop_back();
        
    }
}


int main(void)
{
    
    int a[] = {5, 6, 7, 8};
    int arrayLength = sizeof(a) / sizeof(a[0]);

    char s[] = {'Q', 'W', 'E', 'R', 'T', 'Y'};
    char subset[6];

    //generateSubsets(s, 0, subset, 0);
    subsets(a, 0, arrayLength);
    return(0);
}

