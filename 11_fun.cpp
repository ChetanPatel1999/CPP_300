#include<iostream>
using namespace std;
int fun1()
{
    float d=45.67;
    return d;
}
char fun2()
{
    return 'p';
}
float fun3()
{
    return 56.89;
}
string  fun4()
{
    return "chetan";
}
bool fun5()
{
    return true;
}
int main()
{
  cout<<"return value :"<<fun1()<<endl;
  cout<<"return value :"<<fun2()<<endl;
  cout<<"return value :"<<fun3()<<endl;
  cout<<"return value :"<<fun4()<<endl;
  cout<<"return value :"<<fun5()<<endl;
  return 0;
}
