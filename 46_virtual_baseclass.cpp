#include <iostream>
using namespace std;
class A
{
    protected:
    int num;

public:
    void set(int a)
    {
        num = a;
    }
};
class B : public virtual A
{
};
class C : public virtual A
{
};
class D : public B, public C
{
public:
    void display()
    {
        cout << "num = " << num << endl;
    }
};
int main()
{
    D d1;
    d1.set(12);
    d1.display();
    return 0;
}