// references in C++

#include <iostream>
using namespace std;
int main(void)
{
    int x = 20;
    int& xref = x;

    cout << "x = " <<x <<"\n";
    cout << "xref = " << xref << "\n";

    x = 25;

    cout << "x = " << x << "\n";
    cout << "xref = " << xref << "\n";

    xref = 40;
    cout << "x = " << x << "\n";
    cout << "xref = " << xref << "\n";
}