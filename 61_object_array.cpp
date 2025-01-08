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
    emp() {}
    emp(int a, float b)
    {
        id = a;
        sal = b;
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
    emp *ptr = new emp[3] {emp(101,2000),emp(102,6000),emp(103,8000)};
    int i;
    emp::setcount_0();
    for (i = 0; i < 3; i++)
    {
        ptr[i].displayemp();
    }
    return 0;
}