// read file using ifstream class object
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream read;
    string s;
    read.open("facto.txt");
    while (read.eof()==0) // till read.eof() function return 0 while loop run otherwise stop 
    {
        getline(read, s);
        cout << s<<endl;
    }
    read.close();
    return 0;
}