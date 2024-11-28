#include <iostream>

using namespace std;

int a=6,b=4;

int lnko(){
while(a!=b)
    {
        if(a>b)
        {
            a-=b;
        }
        else{b-=a;}
    }
    return a;
}

int lkkt()
{
    return a*b/lnko();
}
int main()
{
   int c=a;
   int d=b;
   cout << "lnko" << lnko()<<endl;
   a=c;
   b=d;
   cout << "lkkt" << lkkt()<< endl;
    return 0;
}
