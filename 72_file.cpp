#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream w("facto.txt",_S_app);
    int fact = 1, num, i;
    cout << "enter a num :";
    cin >> num;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    cout << "factorial of " << num << " = " << fact << endl;
    w<< "factorial of " << num << " = " << fact << endl;
    w.close();
    return 0;
}