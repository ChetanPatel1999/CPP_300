// reference variable
#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    int &b = a;
    cout << a << endl;
    cout << b << endl;
    b = 90;
    cout << a << endl;
    cout << b << endl;
    cout << &a << endl;
    cout << &b << endl;

    return 0;
}