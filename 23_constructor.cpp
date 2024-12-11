#include <iostream>
using namespace std;
class demo
{
    public:
    demo(int a)
    {
        cout << "1 args constructor is called" << endl;
    }
    demo()
    {
        cout << "0 args constructor is called" << endl;
    }
    demo(int a, int b)
    {
        cout << "2 args constructor is called" << endl;
    }
    demo(int a, int b, int c)
    {
        cout << "3 args constructor is called" << endl;
    }
};
int main()
{
    demo d1,d2(12,34);
    return 0;
}