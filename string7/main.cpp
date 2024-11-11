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
    int pos,hanyat;
    cout << "pos=";
    cin >> pos;
    cout << "hany karaktert ...=";
    cin >> hanyat;
    str1.replace(pos,hanyat,str2);
    cout << str1;

    return 0;
}
