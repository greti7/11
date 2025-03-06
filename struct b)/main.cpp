#include <iostream>
#include <fstream>

using namespace std;

struct diak{
   int azonosito;
   string nev;
   string osztaly;
   double media;
   } diak[100];


int main()
{

  int n,i,min=100,idx;
  ifstream input("input.txt");
  input >> n;
  for(i=0;i<n;i++)
  {
      input << diak[i].azonosito;
      input << diak[i].nev;
      input << diak[i].osztaly;
      input << diak[i].media;
  }


   if(i==0)
   {
       min=diak[i].media;
       idx=diak[i].azonosito;

   }
   if(diak[i].media<min)
   {
       min=diak[i].media;
       idx=diak[i].azonosito;
   }
 cout << idx << endl;





    return 0;
}
