#include <iostream>
using namespace std;
void add()
{
    cout << "sum = 12" << endl;
}
void add(int a)
{
    cout << "sum = " << a << endl;
}
void add(char a)
{
}
void add(int a, int b)
{
    cout << "sum = " << (a + b) << endl;
}
void add(int a, float b)
{
    cout << "sum = " << (a + b) << endl;
}
void add(double b, int a)
{
    cout << "sum = " << (a + b) << endl;
}
void add(float a, float b)
{
    cout << "sum = " << (a + b) << endl;
}
int main()
{
    add(15.7f, 6.8f);
    add();
    return 0;
}