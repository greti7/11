#include <iostream>

using namespace std;

int main()
{
    int a[100][100],m,n,sor,oszlop,S=0,Sm=0;
    cout << "m=";
    cin >> m;
    cout << "n=";
    cin >> n;
    for(sor=0;sor<m;sor++)
    {
        for(oszlop=0;oszlop<n;oszlop++)
        {
            cout << "a["<<sor<<"]["<<oszlop<<"]=";
            cin>> a[sor][oszlop];
        }
    }
    for(sor=0;sor<m-1;sor++)
    {
        for(oszlop=0;oszlop<n-1;oszlop++)
        {
            S=a[sor][oszlop]+a[sor][oszlop+1]+a[sor+1][oszlop]+a[sor+1][oszlop+1];
            if(S>Sm)
            {
                Sm=S;
            }
        }
    }
    return 0;
}
