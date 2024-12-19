#include <iostream>
using namespace std;
class student
{
    string name;
    int rno;
    string stream;

public:
    void setstd(string s1, int a, string s2)
    {
        name = s1;
        rno = a;
        stream = s2;
    }
    void displaystd()
    {
        cout << "name of student : " << name << endl;
        cout << "rno of student : " << rno << endl;
        cout << "stream of student : " << stream << endl;
    }
};
class comstd : public student
{
    int bussiness;
    int account;
    int ip;

public:
    void setcom(string s1, int h, string s2, int a, int b, int c)
    {
        setstd(s1, h, s2);
        bussiness = a;
        account = b;
        ip = c;
    }
    void displaycom()
    {
        displaystd();
        cout << "bussiness : " << bussiness << endl;
        cout << "account : " << account << endl;
        cout << "ip : " << ip << endl;
        cout << "_________________________________" << endl;
    }
};
class mathstd : public student
{
    int math;
    int pysics;
    int chemestry;

public:
    void setmath(string s1, int h, string s2, int a, int b, int c)
    {
        setstd(s1, h, s2);
        math = a;
        pysics = b;
        chemestry = c;
    }
    void displaymath()
    {
        displaystd();
        cout << "math : " << math << endl;
        cout << "pysics : " << pysics << endl;
        cout << "chemestry : " << chemestry << endl;
        cout << "_________________________________" << endl;
    }
};
int main()
{
    mathstd s1;
    s1.setmath("ram", 1001, "maths", 56, 78, 90);
    s1.displaymath();
    comstd s2;
    s2.setcom("shyam", 1002, "com",88, 98, 45);
    s2.displaycom();
    return 0;
}