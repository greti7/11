#include <iostream>

using namespace std;

int main()
{


    int a[50][50],N;
    cin >> N;
    for(int sor=0;sor<N;sor++)
    {
        for(int oszlop=0;oszlop<N;oszlop++)
        {
            cout<<"a["<<sor<<"]["<<oszlop<<"]=";
            cin >> a[sor][oszlop];
        }
    }
    for(int sor=0;sor<N;sor++)
    {
        for(int oszlop=0;oszlop<N;oszlop++)
        {
            cout << a[sor][oszlop] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
