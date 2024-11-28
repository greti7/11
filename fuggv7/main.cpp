#include <iostream>

using namespace std;

int divPrim(int szam);
{
int S=0;
for(int oszto=2;oszto<=szam;oszto++)
{
    int counter=0;
    while(szam%oszto==0)
    {
        szam=szam/oszto;
        counter++;
    }
    if(counter%2==1)
    {
        S+=oszto;
    }

}
return S;

int main()
{
    int S=divPrim(360);
    cout << S << " "<<divPrim(16)<< endl;

    return 0;
}
