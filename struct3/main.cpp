#include <iostream>
#include <fstream>

using namespace std;

struct erdoseg{
string nev;
string szemszin;
int magyar;
int roman;
int matek;
int fizika;
int eletkor;}
diakok[100];

int main()
{
   int n,i,max=0,min=1000,max2=0;
   ifstream input("input.txt");
   input>> n;
   while(diakok[i].nev>0)
   {
       for(i=0;i<n;i++)
       {
          input>> diakok[i].nev;
          input>> diakok[i].szemszin;
          input>> diakok[i].magyar;
          input>> diakok[i].roman;
          input>> diakok[i].matek;
          input>> diakok[i].fizika;
          input>> diakok[i].eletkor;
       }
   }
   int S=0;
   S=S+diakok[i].magyar+diakok[i].roman+diakok[i].matek+diakok[i].fizika;
   if(S/4>max)
   {
       max=S/4;
       if(diakok[i].szemszin="barna")
       {
           cout << diakok[i].nev<<endl;
           cout << diakok[i].fizika<<endl;
       }

   }

   if(diakok[i].eletkor<min)
   {
       min=diakok[i].eletkor;
       cout << diakok[i].nev<<endl;
       cout << diakok[i].szemszin<<endl;
       cout << diakok[i].magyar<<endl;
   }

   if(diakok[i].magyar>max2)
   {
       max2=diakok[i].magyar;
       cout << diakok[i].eletkor<<endl;
       cout << diakok[i].szemszin<<endl;
   }


    return 0;
}
