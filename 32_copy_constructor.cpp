// copy constructor
#include <iostream>
using namespace std;
class number
{
    int num1;
    int num2;

public:
    number() {}
    number(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    number(number &obj)
    {
        cout << "copy constructor is called" << endl;
        num1 = obj.num1+5;
        num2 = obj.num2+5;
    }
    void display()
    {
        cout << "num1 : " << num1 << endl;
        cout << "num2 : " << num2 << endl;
    }
};
int main()
{
    number n1(12, 34), n2(n1),n3;
    n3=n1;//default copy constructor is called
    number n4=n1; // user copy constructor is called
    n1.display();
    n2.display();
    n3.display();
    n4.display();
    return 0;
}