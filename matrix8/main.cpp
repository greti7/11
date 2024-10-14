#include <iostream>

using namespace std;

int main()
{
    int n,m, a[10000][10000],sor,oszlop;
    cout << "n=";
    cout << "m=";
    if(n<=21 && n>=3)
    {
        if(n%2!=0)
        {
            if(m<=21 && m>=3)
            {
                cin >> n;
                cin >> m;
            }
        }
    }
    for(sor=0;sor=m;sor++)
    {
        for(oszlop=0;oszlop=n;oszlop++)
        {
            cout << "a["<<m<<"]["<<n<<"]=";
            cin >> a[m][n];
        }
    }
    if((m>(m/2)) == (m<(m/2)))
    {
        cout << "DA";
    }
    else{cout << "NU";}

    return 0;
}
