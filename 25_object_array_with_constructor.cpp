// object array
#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    emp(int a,int b)
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
    emp e[3]={emp(1,12),emp(2,13),emp(3,14)};
    int i;
    for (i = 0; i < 3; i++)
    {
        e[i].displayemp();
    }
    return 0;
}