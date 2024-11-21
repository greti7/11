#include <iostream>

using namespace std;

bool pallindrom(int szam)
{
    int aux=szam, ujszam=0;
    while(aux>0)
    {
        int szj=aux%10;
        aux=aux/10;
        ujszam=ujszam*10+szj;

    }
    if(szam==ujszam)
    {
        return true;
    }
    return false;
}

int main()
{
    int v[25],n,i,min=1000,max=-1000;
    cout << "n=";
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> v[i];
        if(v[i]<min)
        {
            min=v[i];
        }
        if(v[i]>max)
        {
            max=v[i];
        }
    }
    if(pallindrom(max))
    {
        cout << true;
    }
    return 0;
}
