#include<iostream>
using namespace std;
int main()
{
  string s("home");
  cout<<"string : "<<s<<endl;
  int i;
  for(i=0;s[i]!='\0';i++)
  {
    cout<<s[i];
  }
  return 0;
}