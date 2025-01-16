#include <iostream>

using namespace std;
int osszeg(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n + osszeg(n-1);
}

int main()
{
   int x;
   cin >> x;
   cout << osszeg(x);
    return 0;
}
