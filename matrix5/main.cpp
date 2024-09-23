#include <iostream>

using namespace std;

int main()
{
    int n[10][10],N,sor,oszlop,S=0,P=0;
    cout << "N=";
    cin >> N;
    for(sor=0;sor<N;sor++)
    {
        for(oszlop=0;oszlop<N;oszlop++)
        {
            if(sor==oszlop)
            {
                S=S+n[sor][oszlop];
            }
            if(sor+oszlop=-1)
            {
                P=P+n[sor][oszlop];
            }
        }
    }
    cout << "foatlon:" << S <<endl;
    cout << "mellekatlon:" << P <<endl;

    return 0;
}
