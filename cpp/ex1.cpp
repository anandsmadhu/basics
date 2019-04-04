#include <iostream>

using namespace std; 
  
int &fun() 
{ 
    static int x = 10; 
    cout <<"In function" << endl;
    return x; 
} 
int main() 
{ 

    int a = 40;
    int b = 50;
    int &aref = a;

    cout << "address of a = " << &a << endl;
    cout<<  "address of aref = " << &aref << endl;



    fun() = 20; 
    cout << fun();
    
    fun() = 30;
    cout << fun();
    
    return 0; 
}
