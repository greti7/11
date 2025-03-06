#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> a;
    int n;
    cout << "n=";
    cin >> n;


    a.push_back(n);

    for(int=0;i<n;i++)
    {
         a.pop_back(i);
    }


    for(int i=0; i<a.size(); i++){
        cout << a[i] << " ";
    }




    return 0;
}
