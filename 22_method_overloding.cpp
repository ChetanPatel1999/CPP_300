#include<iostream>
using namespace std;
class display
{
    public:
    void disp(int a)
    {
        cout<<"value of a : "<<a<<endl;
    }
     void disp(double a)
    {
        cout<<"value of a : "<<a<<endl;
    }
     void disp(char a)
    {
        cout<<"value of a : "<<a<<endl;
    }
     void disp(string a)
    {
        cout<<"value of a : "<<a<<endl;
    }
};
int main()
{
  display d1;
  d1.disp('A');
  d1.disp(14);
  d1.disp(14.78);
  d1.disp("home");
  return 0;
}