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
class derived : protected base
{
public:
    void display()
    {
        set(56,78);
        cout << "a : " << a << endl;
        cout << "b : " << b << endl;
        cout << "c : " << c << endl;
    }
};
class derived2 : protected derived{
    public:
    void show()
    {
      set(56,78);
        cout << "a : " << a << endl;
        cout << "b : " << b << endl;
        cout << "c : " << c << endl;  
    }
};
int main()
{
    base b1;
    b1.a=34;
    derived d1;
    d1.a=12;
    d1.b=34;
    d1.set(12,34);
    return 0;
}