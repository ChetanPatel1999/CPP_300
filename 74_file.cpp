//read file using ifstream class object
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream read;
    string s;
    read.open("facto.txt");
    getline(read,s); // read one line
    cout<<s;
    read.close();
    return 0;
}