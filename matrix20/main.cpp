#include <iostream>

using namespace std;

int main()
{
    int a[50][50],n,m,sor,oszlop,x=0,S=0;
    cout << "n=";
    cin >> n;
    cout << "m=";
    cin >> m;
    for(sor=0;sor<n;sor++)
    {
        for(oszlop=0;oszlop<m;oszlop++)
        {
            cin >> a[sor][oszlop];
        }
    }
    for(sor=0;sor<n;sor++)
    {
        for(oszlop=0;oszlop<m;oszlop++)
        {
          if(a[sor+1][oszlop]<min)
          {
              min=a[sor+1][oszlop];
          }
          if(a[sor-1][oszlop]<min)
          {
              min=a[sor-1][oszlop];
          }
          if(a[sor][oszlop+1]<min)
          {
              min=a[sor][oszlop+1];
          }
          if(a[sor][oszlop-1]<min)
          {
              min=a[sor][oszlop-1];
          }
          if(a[sor][oszlop]<min)
          {
              x=min-a[sor][oszlop];
          }
        }
    }
    S=S+x;
    cout << S;
    return 0;
}
