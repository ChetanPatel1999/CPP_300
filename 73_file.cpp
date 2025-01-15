//read file using ifstream class object
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream read;
    string s;
    read.open("facto.txt");
    read>>s;
    cout<<s<<" ";
    read>>s;
    cout<<s;
    read.close();
    return 0;
}