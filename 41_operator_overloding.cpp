// how to pass object in method
#include <iostream>
using namespace std;
class complex
{
public:
    int real;
    int image;

public:
    complex() {}
    complex(int a, int b)
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
        cout << real << endl;
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
    void operator++()
    {
        real++;
        image++;
    }
};
int main()
{
    complex c1(12, 5), c2(4, 7), c3;
    c1.displaycomplex();
    //  ++c1;
    // c1.displaycomplex();
    c2.displaycomplex();
    c3 = c1 + c2;
    c3.displaycomplex();
    return 0;
}