#include <iostream>

using namespace std;

bool stat[100]={false};
int fibonacci(int n)
{
    if(n<=2)
    {
        if(stat[n]==false)
        {
            cout << 1 << " ";
            stat[n]=true;
        }
        return 1;
    }
    int F=fibonacci(n-1)+fibonacci(n-2);
    if(stat[n]==false)
    {
        cout << n << " "<< F << " "<< endl;
        stat[n]=true;
    }
    return F;
}

int main()
{
    int n;
    cout << "n=";
    cin >> n;
    fibonacci(n);
    return 0;
}
