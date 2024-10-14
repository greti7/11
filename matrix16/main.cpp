#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a[50][50],sor,oszlop,N;
    ifstream in("input.txt");
    in >> N;
    for(sor=0;sor<N;sor++)
    {
       for(oszlop=0;oszlop<N;oszlop++)
       {
           in >> a[sor][oszlop];
       }

    }
    for(sor=0;sor<N;sor++)
    {
       for(oszlop=0;oszlop<N;oszlop++)
       {


       }

    }

    return 0;
}
