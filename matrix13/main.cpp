#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a[30][30],i,j,n;
    ifstream input("input.txt")
    input >> n;
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
           input>>a[i][j];
       }

    }

    for(i=0;i<n;i++)
    {
        int max=-9999;
        int maxOszlop=-1;
        for(j=0;j<n;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
                maxOszlop=j;
            }
        }
        cout << i+1 << ":" << maxOszlop+1<<endl;
    }



    return 0;
}
