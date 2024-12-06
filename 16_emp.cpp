#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    void setemp()
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
    emp e1, e2, e3;
    e1.setemp();
    e1.displayemp();
    return 0;
}