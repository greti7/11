#include <iostream>

using namespace std;

void DNPI(int n)
{
    cout << 1 << " ";
    for(int i=3; i<n/2+1; i+=2)
    {    bool prim=true;
        if(n%i==0)
        {
            cout << i << " ";

         for(int j=2; j<n/2+1; j++)
         {
            if(i%j!=0)
            {
               prim=false;
            }
            else{}
         }
         if(!prim)
         {
             cout << i << " ";
         }
        }
    }
}

int main()
{
    DNPI(90);

    return 0;
}
