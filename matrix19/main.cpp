#include <iostream>

using namespace std;

int main()
{
    int a[50][50],n,i,j;
    cout << "n=";
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a[0][i];
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j>n-1)
            {
                a[i][j]=-1;
            }
           else{a[i][j]=(a[i-1][j]+v[i-1][j+1])%100;}
        }
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}
