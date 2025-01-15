//write something inside file
// ofstream class used to write data inside file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //file open with constructor
    ofstream write("abc.txt",_S_app);
    string s="string variable value";
    write<<"hi this sentence1 write by write object"<<endl;
    write<<"hi this sentence2 write by write object"<<endl;
    write<<s<<endl;
    write.close();
    return 0;
}