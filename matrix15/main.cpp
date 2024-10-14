#include <iostream>

using namespace std;

int main()
{
    int a[10][10],sor,oszlop,b[10][10],osszeg[10][10],szorzat[10][10];;
    cout << "n=";
    cin >> n;
    for(sor=0;sor<n;sor++)
    {
       for(oszlop=0;oszlop<n;oszlop++)
       {
           cout << "a["<<sor<<"]["<<oszlop<<"]=";
           cin >> a[sor][oszlop];
       }

    }
    for(sor=0;sor<n;sor++)
    {
       for(oszlop=0;oszlop<n;oszlop++)
       {
           cout << "b["<<sor<<"]["<<oszlop<<"]=";
           cin >> b[sor][oszlop];
       }

    }
    for(sor=0;sor<n;sor++)
    {
       for(oszlop=0;oszlop<n;oszlop++)
       {
           osszeg[sor][oszlop]=a[sor][oszlop]+b[sor][oszlop];
       }

    }
    for(sor=0;sor<n;sor++)
    {
       for(oszlop=0;oszlop<n;oszlop++)
       {
           szorzat[sor][oszlop]=0;
           for(int index=0;index<n;index++)
           {
               szorzat[sor][oszlop]+=a[sor][index]*b[index][oszlop];
           }
       }

    }
    for(sor=0;sor<n;sor++)
    {
       for(oszlop=0;oszlop<n;oszlop++)
       {
           cout << szorzat[sor][oszlop] << " ";
       }
       cout << endl;

    }
    return 0;
}
