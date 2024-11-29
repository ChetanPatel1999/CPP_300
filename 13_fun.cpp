#include <iostream>
using namespace std;
int *fun(int num)
{
    int c, s;
    c = num * num * num;
    s = num * num;
    static int arr[] = {s, c};
    return arr;
}
int* fun2()
{
    static int ch=65;
    return &ch;
}
int main()
{
    cout<<*(fun2())<<endl;
    int *ptr = fun(6);
    cout << "squre :" << (*ptr) << endl;
    ptr++;
    cout << "cube :" << (*ptr) << endl;
    return 0;
}