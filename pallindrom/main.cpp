#include <iostream>

using namespace std;

int main()
{
    int n,aux,szj,ujszam;
    cout<<"n=";
    cin >> n;
    ujszam=0;
    aux=n;
    while(aux>0)
    {
        szj=aux%10;
        aux=aux/10;
        ujszam=ujszam*10+szj;
    }
    if(szam==ujszam)
    {
        cout<<"pallindrom";
    }
    else {cout<<"nem pallindrom";}
    return 0;
}
