//template with single parameter
#include <iostream>
using namespace std;
template<class t>
class display
{
    t data1;
    t data2;

public:
    void setdata(t data1,t data2)
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
    display<float> d2;
    d2.setdata(12.56,78.90);
    d2.disp();
    display<char> d3;
    d3.setdata('K','l');
    d3.disp();
    display<string> d4;
    d4.setdata("home","pen");
    d4.disp();
    return 0;
}