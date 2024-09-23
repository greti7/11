#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream out("bac.txt");
    int current,prev,prevprev,F;
    cin>>prevprev>>prev>>current;
    out<<current<<" "<<prev<<" "<<prevprev<<" ";
    while(prev>0)
    {
        F=-current+4*prev-3*prevprev;
        F=F/2;
        current=prev;
        prev=prevprev;
        prevprev
    }

    return 0;
}
