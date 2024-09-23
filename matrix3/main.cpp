#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("input.txt");
    int n[3][3],N,sor,oszlop,E,K,D,Ny;
    in >> N;
    for(sor=0;sor<N;sor++)
    {
        for(oszlop=0;oszlop<N;oszlop++)
        {
            if(sor<oszlop)
            {
                if(sor+oszlop<N-1)
                {
                    E+=n[sor][oszlop];
                }
                if(sor+oszlop>N-1)
                {
                    K+=n[sor][oszlop];
                }
            }
            if(sor>oszlop)
            {
                if(sor+oszlop<N-1)
                {
                    Ny+=n[sor][oszlop];
                }
                if(sor+oszlop>N-1)
                {
                    D+=n[sor][oszlop];
                }
            }
        }
    }
    cout << "E=" << E << endl;
    cout << "K=" << K << endl;
    cout << "D=" << D << endl;
    cout << "Ny=" << Ny << endl;

    return 0;
}
