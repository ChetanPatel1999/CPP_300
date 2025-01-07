#include<iostream>
using namespace std;
int main()
{
  int a=12;
  int *ptr=&a;
  cout<<"val of a : "<<a<<endl;
  cout<<"val of a : "<<(*ptr)<<endl;
  cout<<"add of a : "<<(&a)<<endl;
  cout<<"add of a : "<<(ptr)<<endl;
  return 0;
}