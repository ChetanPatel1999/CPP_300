//template with default parameter
#include <iostream>
using namespace std;
template<class t1,class t2=int>
class display
{
    t1 data1;
    t2 data2;

public:
    void setdata(t1 data1,t2 data2)
    {
        this->data1 = data1;
        this->data2 = data2;
    }
    void disp()
    {
        cout << "data1 : " << data1 << endl;
        cout << "data2 : " << data2 << endl;
    }
};
int main()
{
    display<int> d1;
    d1.setdata(12,90);
    d1.disp();
    display<float,string> d2;
    d2.setdata(12.56,"chair");
    d2.disp();
    display<char> d3;
    d3.setdata('K',99);
    d3.disp();
    display<string,string> d4;
    d4.setdata("home","pen");
    d4.disp();
    return 0;
}