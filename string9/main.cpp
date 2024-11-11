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
    size_t found=str1.find(str2);
    if(found!=string::npos)
    {
      cout << found;
    }
    else {cout << "nincs benne";}

    return 0;
}
