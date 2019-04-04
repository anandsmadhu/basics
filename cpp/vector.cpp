#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;


int main(void)
{
    vector<int> intvector; // simple vector declaration
    vector<int> ivec (10, 1);

    string word;
    vector<string> inputtext;
    int count = 0;

    

    //Accessing vector using subscript
    for(int i=0; i<ivec.size();i++)
    {
        cout << ivec[i] << endl;
    }

    cout <<"After pushback" << endl;

    ivec.push_back(2);
    for(int i=0; i<ivec.size();i++)
    {
        cout << ivec[i] << endl;
    }    
    //Accessing vector using subscript

    cout << "Size of vector is : " << ivec.size() <<endl;

    while(cin >> word && count <=3)
    {
        inputtext.push_back(word);
        count++;
    }

    // iterators
    //string::iterator si;
    cout << "Testng iterators" <<endl;
    auto sib = inputtext.begin();
    auto size = inputtext.size();

    while(sib <= size)
    {
        cout << *sib << endl;
        sib++;

    }

    //for(si = inputtext.begin(); si!=inputtext.end(); si++)
       // cout<< *si << endl;
    



    // iterators

    return(0);


}
