#include <iostream>

using namespace std;



void increasingPrint(int n)
{
    if(n!=1)
        increasingPrint(n-1);
    
    cout << n << " ";
}

void decreasingPrint(int n)
{
    cout << n <<" ";
    if(n!=1)
        decreasingPrint(n-1);

}


int main(void)
{
    int n;
  
    cout <<" Enter n" << endl;
    cin >> n;
    increasingPrint(n);

    cout <<"DECREASING PRINT" << endl;


    decreasingPrint(n);

    return(0);


}