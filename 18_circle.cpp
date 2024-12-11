// we can do defination of method outside class.
#include <iostream>
using namespace std;
class circle
{
    float radius;
    float area;
    float circumference;

public:
    circle(float);
    void calculate_area();
    void caluclate_circumference();
};
circle::circle(float r) // (::  scop resolution operator)
{
    radius = r;
}
void circle::calculate_area()
{
    float pi = 3.141;
    area = pi * radius * radius;
    cout << "area of circle which radius " << radius << " = " << area << endl;
}
void circle::caluclate_circumference()
{

    float pi = 3.141;
    circumference = 2 * pi * radius;
    cout << "circumference of circle which radius " << radius << " = " << circumference << endl;
}

int main()
{
    circle c1(5), c2(9), c3(4);
    c1.calculate_area();
    c2.calculate_area();
    c3.calculate_area();
    c1.caluclate_circumference();
    c2.caluclate_circumference();
    c3.caluclate_circumference();
    return 0;
}