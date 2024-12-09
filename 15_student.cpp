#include <iostream>
using namespace std;
class student
{
  string name;
  int rno;
  float per;
  static int totalpass;
  static int totalfail;
  static int totalcount;
  static string class_teacher;

public:
  void setstudent(string s1, int a, float b)
  {
    name = s1;
    rno = a;
    per = b;
    totalcount++;
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
      totalpass++;
    }
    else
    {
      cout << "student fail" << endl;
      totalfail++;
    }
    cout << "_____________________________________" << endl;
  }
  static void totalresult()
  {
    cout << "total studentd of class : " << totalcount << endl;
    cout << "total pass student : " << totalpass << endl;
    cout << "total fail student : " << totalfail << endl;
    cout << "_____________________________________" << endl;
  }
  static void disp_class_teacher()
  {
    cout << "class Teacher name : " << class_teacher << endl;
    cout << "_____________________________________" << endl;
  }
  static void change_class_teacher(string s)
  {
    class_teacher = s;
  }
  static void classinfo()
  {
    cout << "inside class we have 6 methods" << endl;
    cout << "thanks for using our class" << endl;
  }
};
int student::totalpass = 0;
int student::totalfail = 0;
int student::totalcount = 0;
string student::class_teacher = "teena sharma";
int main()
{
  student s1, s2, s3, s4;
  s1.setstudent("ram", 101, 45);
  s2.setstudent("shyam", 102, 23);
  s3.setstudent("rohit", 103, 12);
  s4.setstudent("aman", 104, 4);
  student::disp_class_teacher();
  s1.displayresult();
  s2.displayresult();
  student::change_class_teacher("mahak gupta");
  student::disp_class_teacher();
  s3.displayresult();
  s4.displayresult();
  student::totalresult();
  student::classinfo();
  return 0;
}