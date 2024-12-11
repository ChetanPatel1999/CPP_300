// object array
#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    emp() {}
    emp(int a, int b)
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
    emp e[3];
    int i,a,b;
    for (i = 0; i < 3; i++)
    {
        cin>>a>>b;
        e[i]=emp(a,b);
    }
    for (i = 0; i < 3; i++)
    {
        e[i].displayemp();
    }
    return 0;
}