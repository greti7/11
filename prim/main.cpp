#include <iostream>

using namespace std;

int main()
{
   int a,oszto;
   bool prim=true;
   cout<<"a=";
   cin>>a;
   for(oszto=2;oszto<=a/2+1;oszto++)
   {
       if(a%oszto==0)
       {
           prim=false;
       }
   }
   if(prim==true)
   {
       cout<<"a szam prim";
   }
   else {cout<<"a szam nem prim";}
    return 0;
}
