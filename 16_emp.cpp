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
    emp e1;
    e1.displayemp();
    return 0;
}