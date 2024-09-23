#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int N,sor,oszlop;
    ifstream in("input.txt");
    in >> N;
    int matrix[N][N];
    for(int sor=0;sor<N;sor++)
    {
        for(int oszlop=0;oszlop<N;oszlop++)
        {
            in >> matrix[sor][oszlop];
            if(sor==oszlop)
            {
                matrix[sor][oszlop]=0;
            }
            if(sor>oszlop)
            {

            }

        }
    }
    if(sor=oszlop)
    {
        a=0;
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
