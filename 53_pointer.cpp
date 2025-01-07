// dynamic array in cpp lanaguage
#include <iostream>
using namespace std;
int main()
{
    int *arr = new int[5];
    int i;
    arr[0]=344;
    arr[1]=90;
    arr[2]=34;
    arr[3]=22;
    arr[4]=23;
    for (i = 0; i < 5; i++)
    {
        cout << (*arr) << " ";
        arr++;
    }
    return 0;
}