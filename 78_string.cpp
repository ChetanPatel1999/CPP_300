// length() := retuen length of string
// at(index) :- return character of given index
#include <iostream>
using namespace std;
int main()
{
    string s = "chetan";
    int i;
    for (i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    return 0;
}