#include <iostream>

using namespace std;
int min(int a,int b)
{
    if(a<b)
    {
        return a;
    }
    return b;
}

int main()
{
   cout << min(2,3);
    return 0;
}
