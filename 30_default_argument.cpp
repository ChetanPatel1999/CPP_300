//default argument in function
#include<iostream>
using namespace std;
void add(int a=5,int b=10) // a and b is default value set argumnet
{
    cout<<"sum : "<<(a+b)<<endl;
}
void total_bill(int qunt ,int price=100)
{
    cout <<"total bill : "<<(qunt*price)<<endl;
}
int main()
{
  add(8);
  total_bill(5,200);
  total_bill(7);
  return 0;
}