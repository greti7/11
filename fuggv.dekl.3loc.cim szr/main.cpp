#include <iostream>

using namespace std;

int lnko(int &a , int &b){
    int c=a;
    int d=b;
while(c!=d)
    {
        if(c>d)
        {
            c-=d;
        }
        else{d-=c;}
    }
    return c;
}

int lkkt(int &a , int &b)
{
    return a*b/lnko(a,b);
}

int main()
{
    int a=6,b=4;
   cout << "lnko" << lnko(a,b)<<endl;
   cout << "lkkt" << lkkt(a,b)<< endl;

    return 0;
}
