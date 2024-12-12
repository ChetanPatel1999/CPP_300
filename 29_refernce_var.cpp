#include<iostream>
using namespace std;
void fun(int &n)
{
    n=90;
}
int main()
{
  int a=12;
  fun(a);
  cout<<a;
  return 0;
}