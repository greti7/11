#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a[50][50],N,sor,oszlop,S=0;
    cout << "N=";
    cin >> N;
    for(sor=0;sor<N;sor++)
    {
        for(oszlop=0;oszlop<N;oszlop++)
        {
            cin >> a[sor][oszlop];
        }
    }
    for(sor=0;sor<N;sor++)
    {
        for(oszlop=0;oszlop<N;oszlop++)
        {
            if(sor+oszlop==N-1)
            {
                S=S+a[sor][oszlop];

            }
        }
    }
    cout << S;
    return 0;
}
