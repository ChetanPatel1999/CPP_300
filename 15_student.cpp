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
  student(string s1, int a, float b)
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
  static void average(student obj1, student obj2)
  {
    float av = (obj1.per + obj2.per) / 2;
    cout << "average percent of " << obj1.name << " and " << obj2.name << " = " << av << endl;
  }
  static void average(student obj1, student obj2, student obj3)
  {
    float av = (obj1.per + obj2.per+ obj3.per) / 3;
    cout << "average percent of " << obj1.name << " and " << obj2.name<< " and " << obj3.name << " = " << av << endl;
  }
};
int student::totalpass = 0;
int student::totalfail = 0;
int student::totalcount = 0;
string student::class_teacher = "teena sharma";
int main()
{
  student s1("ram", 101, 45);
  student s2("shyam", 102, 23);
  student s3("rohit", 103, 12);
  student s4("aman", 104, 4);
  student::disp_class_teacher();
  s1.displayresult();
  s2.displayresult();
  student::change_class_teacher("mahak gupta");
  student::disp_class_teacher();
  s3.displayresult();
  s4.displayresult();
  student::totalresult();
  student::classinfo();
  student::average(s1, s2);
  student::average(s2, s3);
  student::average(s1, s2, s3);
  return 0;
}