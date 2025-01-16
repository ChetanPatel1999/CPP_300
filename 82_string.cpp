#include <iostream>
using namespace std;
int main()
{
    string s = "chetan";
    // s.resize(2);
    cout << s << endl;
    cout << s.capacity()<<endl;
    s.append("h");
    cout << s.capacity()<<endl;
    s.shrink_to_fit();
    cout << s.capacity()<<endl;
    return 0;
}