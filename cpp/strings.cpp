#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(void)
{
    string str1;
    string str2;
    string line;
    str1 = "Hello world";
    char ch;

    cout << str1 << endl;

    getline(cin, line);
    if(line.empty() == true)
    {
        cout << "Empty line" << endl;
        return (0);
    }
    cout << line << endl;
    cout << "length is : " << line.size() << endl;

    // String comparison

    string string1 = "Hello";
    string string2 = "Hello World";
    string string3 = "Goodbye";
    string s4 = string2 + " " + string3;
    cout << "String 4 : " << s4 <<endl;

    // String comparison

        return (0);
}