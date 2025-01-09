#include<iostream>
using namespace std;
class demo
{
    int num1;
    int num2;
    public:
    void setdata(int a,int b)
    {
        num1=a;
        num2=b;
    }
    void display()
    {
        int num1=90;
        cout<<"num1 of dipslay method = "<<num1<<endl;
        cout<<"num1 = "<<this->num1<<endl;
        cout<<"num1 = "<<this->num2<<endl;
    }
};
int main()
{
  demo d1,d2;
  d1.setdata(12,34);
  d1.display();
  d2.setdata(100,200);
  d2.display();
  return 0;
}