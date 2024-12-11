// object array
#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    emp()
    {
        cout << "enter emp info :" << endl;
        cout << "enter emp id : ";
        cin >> id;
        cout << "enter emp sal : ";
        cin >> sal;
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
    int i;
    for (i = 0; i < 3; i++)
    {
        e[i].displayemp();
    }
    return 0;
}