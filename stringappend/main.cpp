#include <iostream>
#include <string>

using namespace std;

int main()
{
    string szo,beszur;
    int pos;
    cout << "szo ";
    cin >> szo;
    cout << "beszurando szo ";
    cin >> beszur;
    szo.append(beszur);
    //szo=szo+beszur;
    cout << szo;
    return 0;
}
