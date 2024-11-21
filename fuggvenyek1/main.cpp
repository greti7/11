#include <iostream>

using namespace std;

int osszeg(int a ,int b, int c)
{
    return a+b+c;
}
 void kiir(int a)
 {
     cout << a;
 }

int main()
{
    int a=2;
    int b=3;
    int c=4;
    int S=osszeg(a,b,c);
    kiir(S);
    return 0;
}
