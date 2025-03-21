#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file("bac.txt");
    int maxi = -1;
    int m,n;
    cin >> m >> n;
    int negyzet[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            file >> negyzet[i][j];
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%3d", negyzet[i][j]);
        }
        cout << "\n";
    }
    for(int row=0;row<m-1;row++)
    {
        for(int col=0;col<n-1;col++)
        {
            int sum=negyzet[row][col]
            +negyzet[row+1][col]
            +negyzet[row][col+1]
            +negyzet[row+1][col+1];
            if(sum>maxi)
            {
                maxi=sum;
            }
        }
    }

    cout << "max=" << maxi;
    return 0;
}
