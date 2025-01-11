//template function
#include<iostream>
using namespace std;

template<class T>
void display(T data)
{
    cout<<"data : "<<data<<endl;
}
template<class T>
float avrage(T a,T b)
{
    return((a+b)/2.0);
}
void display(int a)
{
    cout<<"non- template function call"<<endl;
    cout<<"data : "<<a<<endl;
}
int main()
{
  display(12);
  display(12.90);
  display('K');
  display("home");
  cout<<"avrage : "<<avrage(12,8)<<endl;
  cout<<"avrage : "<<avrage(12,9)<<endl;
  cout<<"avrage : "<<avrage(12.45,9.8)<<endl;
  return 0;
}