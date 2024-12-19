#include <iostream>
using namespace std;
class A    //A is base class
{
public:
    void m1()
    {
        cout << "m1 of A class " << endl;
    }
    void m2()
    {
        cout << "m2 of A class " << endl;
    }
};
class B:public A      // B is derived class
{
public:
    void m3()
    {
        cout << "m3 of B class " << endl;
    }
    void m4()
    {
        cout << "m4 of B class " << endl;
    }
};
int main()
{
    B obj;
    obj.m1();
    obj.m2();
    obj.m3();
    obj.m4();
    return 0;
}