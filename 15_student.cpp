#include <iostream>
using namespace std;
class student
{
  string name;
  int rno;
  float per;

public:
  void setstudent(string s1, int a, float b)
  {
    name = s1;
    rno = a;
    per = b;
  }
  void displayresult()
  {
    cout << "student result : " << endl;
    cout << "student name : " << name << endl;
    cout << "student rno : " << rno << endl;
    cout << "student percentage : " << per << endl;
    if (per > 33)
    {
      cout << "student pass" << endl;
    }
    else
    {
      cout << "student fail" << endl;
    }
    cout << "_____________________________________" << endl;
  }
};
int main()
{
  student s1, s2, s3;
  s1.setstudent("ram", 101, 45);
  s2.setstudent("shyam", 102, 23);
  s3.setstudent("rohit", 103, 80);
  s1.displayresult();
  s2.displayresult();
  s3.displayresult();
  return 0;
}