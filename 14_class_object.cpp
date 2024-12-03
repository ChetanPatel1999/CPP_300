#include <iostream>
using namespace std;
class dog
{
    string name;
    string color;
    int age;
    string breed;

public:
    void setdog(string s1, string s2, int a, string s3)
    {
        name = s1;
        color = s2;
        age = a;
        breed = s3;
    }
    void displaydog()
    {
        cout << "dog info : " << endl;
        cout << "dog name : " << name << endl;
        cout << "dog color : " << color << endl;
        cout << "dog age : " << age << endl;
        cout << "dog breed : " << breed << endl;
        cout << "__________________________________" << endl;
    }
};
int main()
{
    dog d1, d2, d3;
    d1.setdog("tommy", "red", 12, "lebra");

    d2.setdog("wifi", "white", 5, "lebra");

    d3.setdog("moti", "black", 10, "jurmen sepherd");

    d1.displaydog();

    d2.displaydog();

    d3.displaydog();
    
    return 0;
}