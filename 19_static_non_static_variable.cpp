#include <iostream>
using namespace std;
class demo
{
    int a, b;        // non static /instance var.
    static int c, d; // static /class var.
public:
    void setadata(int v, int x, int y, int z)
    {
        a = v;
        b = x;
        c = y;
        d = z;
    }
    void display()
    {
        cout << "a,b " << a << "," << b << endl;
        cout << "c,d " << c << "," << d << endl;
    }
};
int demo::c;
int demo::d;
int main()
{
    demo d1,d2,d3;
    d1.setadata(12,13,100,200);
    d2.setadata(14,15,300,400);
    d3.setadata(16,17,500,600);
    d1.display();
    d2.display();
    d3.display();
    return 0;
}