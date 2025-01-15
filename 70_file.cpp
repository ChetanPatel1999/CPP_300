//write something inside file
// ofstream class used to write data inside file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream write;
    string s="string variable value";
    //file open with open method
    write.open("C:\\Users\\HP\\Documents\\HELLO WORLD INSTITUTE NOTES\\CCPP notes\\abc.txt");
    write<<"hi this sentence1 write by write object"<<endl;
    write<<"hi this sentence2 write by write object"<<endl;
    write<<s<<endl;
    write.close();
    return 0;
}