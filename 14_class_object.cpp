#include <iostream>
using namespace std;
class dog
{
    string name;
    string color;
    int age;
    string breed;

public:
    dog(string name, string color, int age, string breed)
    {
        this->name = name;
        this->color = color;
        this->age = age;
        this->breed = breed;
    }
    void displaydog()
    {
        cout << "dog info : " << endl;
        cout << "dog name : " << this->name << endl;
        cout << "dog color : " << this->color << endl;
        cout << "dog age : " << this->age << endl;
        cout << "dog breed : " << this->breed << endl;
        cout << "__________________________________" << endl;
    }
};
int main()
{
    dog d1("tommy", "red", 12, "lebra");

    dog d2("wifi", "white", 5, "lebra");

    dog d3("moti", "black", 10, "jurmen sepherd");

    d1.displaydog();

    d2.displaydog();

    d3.displaydog();

    return 0;
}