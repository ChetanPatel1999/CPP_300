// dynamic array in cpp lanaguage
#include <iostream>
using namespace std;
int main()
{
    int *arr = new int[5];
    int i;
    int *temp = arr;
    *arr = 12;
    arr++;
    *arr = 89;
    arr++;
    *arr = 896;
    arr++;
    *arr = 689;
    arr++;
    *arr = 889;
    for (i = 0; i < 5; i++)
    {
        cout << (*temp) << " ";
        temp++;
    }
    return 0;
}