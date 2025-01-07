// dyanamic memory  using new operator
#include <iostream>
using namespace std;
int main()
{
    int *ptr = new int;
    int *a = new int(78);
    float *f=new float(8.9);
    *ptr = 12;
    cout << "val of ptr : " << (*ptr) << endl;
    cout << "val of a : " << (*a) << endl;
    cout << "val of f : " << (*f) << endl;
    return 0;
}