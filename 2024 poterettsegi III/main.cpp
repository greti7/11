#include <iostream>

using namespace std;

int main()
{
  int n,m,N[100][100],i,j;
  cout << "m=";
  cin >> m;
  cout << "n=";
  cin >> n;
  for(i=0;i<m;i++)
  {
      for(j=0;j<n;j++)
      {
           cout << "N["<<i<<"]["<<j<<"]=";
           cin>> N[i][j];
      }
  }
 for(int i=1;i<m;i+=2)
 {
     int min = N[i][0];
     for(int j=1;j<n;j++)
     {
         if(N[i][j]<min)
         {
             min=N[i][j];
         }
     }
     for(int j=0;j<n;j++)
     {
         if(N[i-1][j]>min-1)
         {
             N[i-1][j]=min-1;
         }
     }
 }
 for(int i=0;i<m;i++)
 {
     for(int j=0;j<n;j++)
     {
         cout << N[i][j]<< " ";
     }
 }
    return 0;
}
