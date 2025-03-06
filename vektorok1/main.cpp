#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //deklaralas
    vector<int> a;
    int n;
    cout << "n=";
    cin >> n;

    //feltoltes
    a.push_back(n);

    //vegigjaras
    for(int i=0; i<a.size(); i++){
        cout << a[i] << " ";
    }


    return 0;
}
