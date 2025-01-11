// how to pass object in method
#include <iostream>
using namespace std;
template <class T=int>
class complex
{
public:
    T real;
    T image;

public:
    complex() {}
    complex(T a, T b)
    {
        real = a;
        image = b;
    }
    void displaycomplex()
    {
        cout << "complex value : " << real << " + " << image << "i" << endl;
    }
    complex operator+(complex obj)
    {
        complex res;
        res.real = real + obj.real;
        res.image = image + obj.image;
        return res;
    }
    complex operator-(complex obj)
    {
        complex res;
        res.real = real - obj.real;
        res.image = image - obj.image;
        return res;
    }
};
int main()
{
    complex<> c1(12, 5), c2(4, 7), c3;
    c1.displaycomplex();
    c2.displaycomplex();
    c3 = c1 + c2;
    c3.displaycomplex();
    cout << "____________________________" << endl;
    complex<float> c4(12.45, 5.67), c5(4.23, 7.67), c6;
    c4.displaycomplex();
    c5.displaycomplex();
    c6 = c4 + c5;
    c6.displaycomplex();
    return 0;
}