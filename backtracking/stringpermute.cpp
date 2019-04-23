/*
what choice does each call make. 
what is passed on to further calls
*/

#include <iostream>
#include <string>

using namespace std;

void permuteString(string s, string chosen)
{
    if(s.empty())
    {
        cout<<chosen<<endl;
    }
    else
    {
        for(int idx = 0; idx<s.length();idx++)
        {
            //choose
            char c = s[idx];
            chosen = chosen+c;
            s.erase(idx,1);
            
            //explore
            permuteString(s, chosen);

            //unchoose
            s.insert(idx,1,c);
            chosen.erase(chosen.length()-1, 1);
        }
    }
}

void permute(string s)
{
    permuteString(s, "");
}

int main(void)
{
    string str = "ABCDE";

    permute(str);
    return(0);
}