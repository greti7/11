#include <iostream>

using namespace std;

int main()
{
    int n,k,a[50][50],sor,oszlop,i,aux;
    cout << "n=";
    cin >> n;
    cout << "k=";
    cin >> k;
    for(sor=0;sor<n;sor++)
    {
        for(oszlop=0;oszlop<n;oszlop++)
        {
            cin >> a[sor][oszlop];
        }
    }
    for(sor=0;sor<k;sor++)
    {
        for(oszlop=0;oszlop<k;oszlop++)
        {
            if(oszlop<k)
            {
                aux=a[k][k-1];

            }
        }
    }
    for(oszlop=k-1;oszlop>1;oszlop--)
    {
        a[k][oszlop]=a[k][oszlop-1];
    }
    a[k][0]=aux;
    for(sor=0;sor<n;sor++)
    {
        for(oszlop=0;oszlop<n;oszlop++)
        {
            cout << a[sor][oszlop] << " ";
        }
        cout << endl;
    }

    return 0;
}
