#include <iostream>
using namespace std;
class base
{
public:
    int a;
    private:
    int b;
    public :
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
    }
};
void fun()
{
    derived obj;
    obj.set(4, 5);
    cout << "a : " << obj.a << endl;
    cout << "b : " << obj.b << endl;
}
class demo
{
    base b1;
public:
    void fun()
    {
        derived obj;
        obj.set(4, 5);
        cout << "a : " << obj.a << endl;
        cout << "b : " << obj.b << endl;
    }
};
int main()
{
    base b1;
    b1.set(90, 44);
    cout << "a : " << b1.a << endl;
    cout << "b : " << b1.b << endl;
    derived d1;
    d1.set(34, 56);
    d1.display();

    return 0;
}