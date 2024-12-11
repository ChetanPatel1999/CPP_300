// object array
#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    emp(int a)
    {
       id=a;
       sal=500;
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
    emp e[3]={101,202,303};
    int i;
    for (i = 0; i < 3; i++)
    {
        e[i].displayemp();
    }
    return 0;
}