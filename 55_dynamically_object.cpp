//pointer to object
// arrow operator
#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;
public:
    emp(int a,float b)
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
    emp *ptr= new emp(101,2500);
    ptr->displayemp();
    return 0;
}