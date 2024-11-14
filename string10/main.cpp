#include <iostream>
#include <string>

using namespace std;

int main()
{
   string str,str2="m",str3="mpm";
   cout << "str=";
   cin >> str;
   size_t found=str.find("m");
   str.replace(1,1,str3);
   cout << str;

    return 0;
}
