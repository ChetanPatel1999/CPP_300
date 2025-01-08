// pointer to object
//  arrow operator
#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;
    static int count;

public:
    void setdata(int a, float b)
    {
        id = a;
        sal = b;
    }
    void displayemp()
    {
        count++;
        cout << "emp " <<count<<" info........" << endl;
        cout << "emp id :" << id << endl;
        cout << "emp sal :" << sal << endl;
    }
};
int emp::count=0;
int main()
{
    emp *ptr = new emp[3];
    emp *temp = ptr;
    int i, id;
    float sal;
    for (i = 0; i < 3; i++)
    {
        cout<<"enter "<<(i+1)<<" emp info : "<<endl;
        cout<<"enter emp id : ";
        cin>>id;
        cout<<"emp sal : ";
        cin>>sal;
        ptr->setdata(id, sal);
        ptr++;
    }
    ptr=temp;
    for(i=0;i<3;i++)
    {
        ptr->displayemp();
        ptr++;
    }
    return 0;
}