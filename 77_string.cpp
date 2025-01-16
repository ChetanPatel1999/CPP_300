#include<iostream>
using namespace std;
int main()
{
  string name="ra";
  string s_name="sharma";
  string f_name=name+" "+s_name;
  cout<<"full name : "<<f_name<<endl;
  if("ram sharma"==f_name)
  {
    cout<<"find ram sharam";
  }
  else
  {
     cout<<"not find ram sharam";
  }
  return 0;
}