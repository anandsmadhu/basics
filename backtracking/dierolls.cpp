/*
what choice does each call make. 
what is passed on to further calls
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void roll(int dice, vector <int> &choice)
{
    if(dice == 0)
    {
        cout<<"{";
        for(int idx = 0; idx<choice.size(); idx++)
        {
            cout<<choice[idx]<<",";
        }
        cout<<"}"<<endl;
    }
    else
    {
        for(int diechoice=1; diechoice<=6;diechoice++)
        {
            //choose for die 1
            choice.push_back(diechoice);

            //explore
            roll(dice-1, choice);

            // undo choice
            choice.pop_back();
        }
    }
}


void rolldice(int dice)
{
    if(dice ==0)
        return;
    vector <int> choice;
    roll(dice, choice);
}


int main(void)
{
    int dice = 2;
    rolldice(dice);
}