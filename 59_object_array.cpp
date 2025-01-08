// pointer to object
//  arrow operator
#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;
    static int count;

public:
    void setdata()
    {
        count++;
        cout << "enter " << count << " emp info : " << endl;
        cout << "enter emp id : ";
        cin >> id;
        cout << "emp sal : ";
        cin >> sal;
    }
    static void setcount_0()
    {
        count = 0;
    }
    void displayemp()
    {
        count++;
        cout << "emp " << count << " info........" << endl;
        cout << "emp id :" << id << endl;
        cout << "emp sal :" << sal << endl;
    }
};
int emp::count = 0;
int main()
{
    emp *ptr = new emp[3];
    int i, id;
    float sal;
    for (i = 0; i < 3; i++)
    {
        ptr[i].setdata();
    }
    emp::setcount_0();
    for (i = 0; i < 3; i++)
    {
        ptr[i].displayemp();
    }
    return 0;
}