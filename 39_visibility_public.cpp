#include <iostream>
using namespace std;
class base
{
public:
    int a;

protected:
    int b;

private:
    int c;

public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
};
class derived : public base
{
public:
    void display()
    {
        cout << "a : " << a << endl;
        cout << "b : " << b << endl;
        cout << "c : " << c << endl;
    }
};
int main()
{
    derived d1;
    d1.a=12;
    d1.b=34;
    return 0;
}