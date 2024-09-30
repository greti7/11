#include <iostream>

using namespace std;

int main()
{
    int a[100][100];
    int n,m,sor,oszlop;
    cout << "n=";
    cin >> n;
    cout << "m=";
    cin >> m;
    for(sor=0;sor<n;sor++)
    {
        for(oszlop=0;oszlop<m;oszlop++)
        {
            cout << "a["<<sor<<"]["<<oszlop<<"]=";
            cin >> a[sor][oszlop];
        }
    }
   cout << endl;
   for(sor=1;sor<n;sor+=2)
   {
       int min = a[sor][0];
       for(oszlop=0;oszlop<m;oszlop++)
       {
           if(a[sor][oszlop]>min-1)
           {
               a[sor-1][oszlop]=min-1;
           }
       }
   }
   for(sor=0;sor<n;sor++)
   {
       for(oszlop=0;oszlop<m;oszlop++)
       {
           cout << a[sor][oszlop] << " ";
       }
       cout << endl;
   }
    return 0;
}
