#include <iostream>

using namespace std;

int majImp(int a, int b)
{
    for(int szam=a;szam<=b;szam++)
    {
        int S=0;
        int P=0;
        for(int oszto=2;oszto<szam/2+1;oszto++)
        {
            if(szam%oszto==0)
            {
                if(oszto%2==0)
                {
                    S=S+oszto;
                }
                else{P=P+oszto;}
            }
        }
        if(P>S)
        {
            return szam;
        }
    }
    return 0;
}

int main()
{
   int a,b;
   cout << "a=";
   cin >> a;
   cout << "b=";
   cin >> b;
   cout << majImp(a,b);
    return 0;
}
