#include <iostream>
using namespace std;
class base
{
    protected:
    int num1;
    int num2;

public:
    void setdata(int num1, int num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }
    virtual void display1() = 0; // pure virtual function
    virtual void display2() = 0; // pure virtual function
};
class derived : public base
{
    public:
    void m1()
    {
        cout<<"hi i am m1 method "<<endl;
    }
    void display1()
    {
        cout<<"num1 ="<<num1<<endl;
    }
     void display2()
    {
        cout<<"num1 ="<<num2<<endl;
    }
};
int main()
{
    derived d1;
    d1.setdata(12,34);
    d1.display1();
    d1.display2();
    return 0;
}