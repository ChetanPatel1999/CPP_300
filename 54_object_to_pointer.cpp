//pointer to object
// arrow operator
#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    void setdata(int a,float b)
    {
        id=a;
        sal=b;
    }
    void displayemp()
    {
        cout << "emp info........" << endl;
        cout << "emp id :" << id << endl;
        cout << "emp sal :" << sal << endl;
    }
};
int main()
{
    emp e1,*ptr,e2;
    ptr=&e1;
    (*ptr).setdata(101,2500);
    (*ptr).displayemp();
    ptr=&e2;
    ptr->setdata(102,5000);
    ptr->displayemp();
    return 0;
}