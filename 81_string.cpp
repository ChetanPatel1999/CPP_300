#include <iostream>
using namespace std;
inline void disp(string s)
{
    cout << s << endl;
}
int main()
{
    string s;
    s = "chetan";
    s.push_back('k');
    cout << s << endl;
    //s.pop_back();
    //cout << s << endl;
    s.clear();
    cout << s << endl;
    s.push_back('M');
    cout << s << endl;

    return 0;
}