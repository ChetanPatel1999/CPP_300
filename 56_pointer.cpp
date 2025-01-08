// pointer to object
//  arrow operator
#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    void setdata(int a, float b)
    {
        id = a;
        sal = b;
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
    emp *ptr = new emp[3];
    emp *temp=ptr;
    ptr->setdata(101,4000);
    ptr++;
    ptr->setdata(102,6000);
    ptr++;
    ptr->setdata(103,10000);
    ptr=temp;
    ptr->displayemp();
    ptr++;
    ptr->displayemp();
    ptr++;
    ptr->displayemp();
    return 0;
}