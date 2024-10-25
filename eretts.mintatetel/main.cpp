#include <iostream>

using namespace std;

int main()
{
    int n,m,a[50][50],sor,oszlop,nr=0;
    cout << "m=";
    cin >> m;
    cout << "n=";
    cin >> n;
    for(sor=m-1;sor>-1;sor--)
    {
        for(oszlop=n-1;oszlop>-1;oszlop--)
        {
            a[sor][oszlop]=nr*nr;
            nr+=2;
        }
    }

    for(sor=0;sor<m;sor++)
    {
        for(oszlop=0;oszlop<n;oszlop++)
        {
            cout << a[sor][oszlop] << " ";

        }
        cout << endl;
    }
    return 0;
}
