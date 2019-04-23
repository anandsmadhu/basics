#include <iostream>
#include <string>
#include <vector>

using namespace std;


int calcSum(vector<int> soFar)
{
    int t = 0;
    for(int idx = 0; idx<soFar.size(); idx++)
    {
        t = t+(soFar[idx]);
    }
    return(t);
}


/*
reduce sum = sum = sum -i

*/

void calcDiceSum(int dice, int sum, vector<int> &soFar)
{
    
    if(dice ==0)
    {
        if(calcSum(soFar) == sum)
        {
            cout<<"[";
            for(int idx = 0; idx<soFar.size(); idx++)
            cout<<soFar[idx]<<",";
            cout<<"]\n";
        }
    }
    else
    {
        for(int dieval = 1; dieval<=6; dieval++)
        {
            soFar.push_back(dieval);
            calcDiceSum(dice-1, sum, soFar);
            soFar.pop_back();
        }
    }
}

void diceSum(int dice, int sum)
{
    vector<int> soFar;
    if ((dice ==0) || (sum ==0))
        return;
    
    calcDiceSum(dice, sum, soFar);
}

int main(void)
{

    int dice = 5;
    int sum = 7;

    diceSum(dice, sum);

    return(0);
}