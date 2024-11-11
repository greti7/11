#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1,str2;
    cout << "str2=";
    getline(cin,str2);
    cout << "str1=";
    cin >> str1;
    size_t found=str2.find(" ");
    str1.append(str2,0,found);
    cout << str1;

    return 0;
}
