#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout << "0 args base constructor called" << endl;
    }
    base(int a)
    {
        cout << "1 args base constructor called" << endl;
    }
    base(int a, int b)
    {
        cout << "2 args base constructor called" << endl;
    }
    base(int a, int b, int c)
    {
        cout << "3 args base constructor called" << endl;
    }
};
class derived : public base
{
public:
    derived()
    {
        cout << "0 args derived constructor called" << endl;
    }
    derived(int a):base(a,90)
    {
        cout << "1 args derived constructor called" << endl;
    }
    derived(int a, int b):base(a,b,90)
    {
        cout << "2 args derived constructor called" << endl;
    }
    derived(int a, int b, int c)
    {
        cout << "3 args derived constructor called" << endl;
    }
};
int main()
{
    derived d1(78,89);
    return 0;
}