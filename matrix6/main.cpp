#include <iostream>

using namespace std;

int main()
{
    int n,a[n][n],oszlop,sor;

    for(sor=0;sor<n-1;sor++)
    {
        for(oszlop=sor+1;oszlop<n;oszlop++)
        {
            cin >> a[sor][oszlop];
            a[oszlop][sor]=a[sor][oszlop];
        }
    }
    if(sor==oszlop) && (sor+oszlop=-1)
    {
        sor=1;
        oszlop=1;
    }
    return 0;
}
