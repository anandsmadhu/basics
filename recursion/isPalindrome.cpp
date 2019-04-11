#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s)
{
    if(s.length() <2)
    {
        return(true);

    }
    else
    {
        char first = s[0];
        char last = s[s.length() -1];
        if(first==last)
        {
            string substring = s.substr(1, s.length()-2);
            isPalindrome(substring);
        }
        else
        {
            return(false);
        }
        
    }
}

int main(void)
{
    string s = "racecar";
    bool result;
    result = isPalindrome(s);
    printf("result = %d\n", result);

}