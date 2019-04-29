#include <iostream>

using namespace std;

int power = 0;

int getFirstDigit(int number)
{

}

int getPower(int pow)
{
    
}

bool isnumberPalindrome(int number)
{
    int lastDigit = number%10;
    int firstDigit = getFirstDigit(number);
    if(firstDigit != lastDigit)
        return(false);
    else
    {
        number = number /10;
        number = number % (getPower(power-1));
        
    }
    
    

}


bool checkPalindrome (int number)
{
    if(number ==0)
        return(true);
    return(isnumberPalindrome(number));

}

int main(void)
{
    int number = 98766;

    checkPalindrome(number);
}
