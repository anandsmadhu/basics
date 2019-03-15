#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str1;
    string str2;
    string line;
    str1 = "Hello world";
    cout << str1 << endl;

    getline(cin, line);
    if(line.empty() == true)
    {
        cout << "Empty line" << endl;
        return (0);
    }
    cout << line << endl;
    cout << "length is : " << line.size() << endl;
    return(0);
   
}