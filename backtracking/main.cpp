#include <iostream>
#include <vector>

using namespace std;

int S=20;
int ermek[]={100,50,20,10,5,1};
bool lehet(int erme,int tempOsszeg)
{
    if(tempOsszeg+erme>S)
    {
        return false;
    }
    return true;
}

void kiir(vector<int> eddigiErmek)
{
    for(int=0;i<eddigiErmek.size();i++)
    {
        cout << eddigiErmek[i]<< " ";
    }
    cout << endl;
}

void backtrack(vector<int> eddigiErmek, int index)
{
    int tempOsszeg=0;
    for(int egyErme:eddigiErmek)
    {
        tempOssze+=egyErme;
    }
    if(tempOsszeg==S)
    {
        kiir(eddigiErmek);
        return;
    }
    for(int i=index;i<6;i++)
    {
        if(lehet(ermek[i],tempOsszeg))
        {
            vector<int> tempEddigiErmek;
            tempEddigiErmek.push_back
        }
    }
}

int main()
{

    return 0;
}
