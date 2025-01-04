#include <iostream>
using namespace std;
class data;
class disp
{
public:
    void display1(data obj);
    void display2(data obj);
};
class data
{
    int num1;
    int num2;
    friend void disp::display1(data);
    friend void disp::display2(data);

public:
    data(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
};
void disp::display1(data obj)
{
    cout << "num1 : " << obj.num1 << endl;
}
void disp::display2(data obj)
{
    cout << "num2 : " << obj.num2 << endl;
}
int main()
{
    data d1(12, 45);
    disp d;
    d.display1(d1);
    d.display2(d1);
    return 0;
}