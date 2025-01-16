#include <iostream>

using namespace std;

int szj(int n)
{

    if(n==0)
    {
        return 0;
    }
    return 1+szj(n/10);

}

int main()
{
   cout << szj(12345) << endl;
    return 0;
}
