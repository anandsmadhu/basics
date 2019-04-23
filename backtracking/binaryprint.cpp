#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
print all binary numbers that had that many digits
Print all 3 bit numbers uwing recursion
*/


void printAllBinaryHelper(int digit, string output)
{
    if(digit ==0)
    {
        cout<<output<<endl;
        
    }
    else
    {
        output = output+"0";
        printAllBinaryHelper(digit-1, output);

        output.pop_back();
        
        output = output+"1";
        printAllBinaryHelper(digit-1, output);
    }
}

void printAllBinary(int n)
{
    string output = "";
    printAllBinaryHelper(n, output);
}

int main(void)
{
    printAllBinary(4);
    return(0);
}