#include <iostream>

using namespace std;

bool prim(int szam)
{
    for(int oszto=2;oszto<szam/2+1;oszto++)
    {
        if(szam%oszto==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
   int a;
   cout << "a=";
   cin >> a;
   if(prim(a))
   {
       cout << a << "prim";
   }
   if(prim(5))
   {
       cout << 5 << "prim";
   }
    return 0;
}
