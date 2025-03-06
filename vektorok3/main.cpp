#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> a;
    int n,k;
    cout << "n=";
    cin >> n;

   for(int i=0;i<n;i++)
   {
       a.push_back(i);
   }
   cout << "k=";
   cin >> k;
   for(int i=0;i<k;i++)
   {
       a.pop_back();
   }

   for(int i=0;i<a.size();i++)
   {
       cout << a[i] << " ";
   }

    return 0;
}
