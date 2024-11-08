#include <iostream>
#include <string>

using namespace std;

int main()
{
    string szo="kabala", keres="ab";
    size_t found=szo.find(keres);
    cout << found;
    return 0;
}
