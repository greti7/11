#include <iostream>

using namespace std;

int a,b;
int lnko()
{ int a= ::a, b= ::b;
while (a!=b)
{
    if(a>b)
    {
        a=a-b;
    }
    else{b=b-a;}
}
return a;
}


int main()
{
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;


    return 0;
}
