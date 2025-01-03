#include <iostream>
using namespace std;
class base
{
public:
    void m1(int a)
    {
        cout << "base class m1 " << endl;
    }
};
class derived : public base
{
public:
    void m1(int a)// override method
    {
        cout << "derived class m1 " << endl;
    }
};
int main()
{
    derived d1;
    d1.m1(12);
    return 0;
}