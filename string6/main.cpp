#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1,str2;
    cout << "str1=";
    cin >> str1;
    cout << "str2=";
    cin >> str2;
    int pos;
    cout << "pos=";
    cin >> pos;
    str1.insert(pos,str2);
    cout << str1;

    return 0;
}
