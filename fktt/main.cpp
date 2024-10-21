#include <iostream>

using namespace std;

int main()
{
    int a[50][50],n,m,sor,oszlop,S=0;
    cout << "m=";
    cin >> m;
    cout << "n=";
    cin >> n;
    for(sor=1;sor<=m;sor++)
    {
        for(oszlop=1;oszlop<=n;oszlop++)
        {
            cin >> a[sor][oszlop];
        }
    }
    for(int oszlop=0;oszlop<=n+1;oszlop++)
    {
        a[0][oszlop]=10;
        a[m+1][oszlop]=10;
    }
    for(int sor=0;sor<=m+1;sor++)
    {
        a[sor][0]=10;
        a[sor][n+1]=10;
    }
    for(sor=1;sor<=m;sor++)
    {
        for(oszlop=1;oszlop<=n;oszlop++)
        {
            if(a[sor][oszlop]<a[sor+1][oszlop] && a[sor][oszlop]<a[sor-1][oszlop] && a[sor][oszlop]<a[sor][oszlop-1] && a[sor][oszlop]<a[sor][oszlop+1])
            {
               int minNGH=a[sor+1][oszlop];
               if(minNGH>a[sor-1][oszlop])
               {
                   minNGH=a[sor-1][oszlop];
               }
               if(minNGH>a[sor][oszlop+1])
               {
                   minNGH=a[sor][oszlop+1];
               }
               if(minNGH>a[sor][oszlop-1])
               {
                   minNGH=a[sor][oszlop-1];
               }
               S+=minNGH-a[sor][oszlop];
            }


        }

    }
    cout << S;

    return 0;
}
