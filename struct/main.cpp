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



   if(i==0)
   {
       max=diak[i].media;
       idx=diak[i].azonosito;

   }
   if(diak[i].media>max)
   {
       max=diak[i].media;
       idx=diak[i].azonosito;
   }
 cout << idx << endl;
   }

    return 0;
}
