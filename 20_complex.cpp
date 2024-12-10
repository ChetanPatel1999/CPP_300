// how to pass object in method
#include <iostream>
using namespace std;
class complex
{
    public:
    int real;
    int image;

public:
    void setcomplex(int a, int b)
    {
        real = a;
        image = b;
    }
    void displaycomplex()
    {
        cout << "complex value : " << real << " + " << image << "i" << endl;
    }
    complex sum(complex obj)
    {
        complex res;
        res.real = real + obj.real;
        res.image = image + obj.image;
        return res;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setcomplex(12, 8);
    c2.setcomplex(5, 4);
    c1.displaycomplex();
    c2.displaycomplex();
    c3 = c1.sum(c2);
    c3.displaycomplex();
    return 0;
}