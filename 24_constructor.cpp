#include<iostream>
using namespace std;
class number
{
    int num1;
    int num2;
    public:
    number(int a=12,int b=90)// default constructor
    {
        num1=a;
        num2=b;
    }
    void display()
    {
        cout<<"num1 : "<<num1<<endl;
        cout<<"num2 : "<<num2<<endl;
    }
};
int main()
{
    number n1(12,34),n2;
    n1=number(6,9);// explicit calling of constructor
    n1.display();
    n2.display();
    return 0;
}