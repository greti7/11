#include <iostream>

using namespace std;
void quicksort(int arr[],int balindex, int jobbindex)
{
    int i=balindex;
    int j=jobbindex;
    int pivot=arr[(balindex+jobbindex)/2;];
    while(i<=j)
    {
        while(arr[i]<pivot)
        {
            i++;
        }
         while(arr[i]>pivot)
        {
            j--;
        }
        if(i<=j)
        {
            int tmp=arr[i];
            arr[i]=arr[j];
            arr[j]=tmp;
            i++;
            j--;
        }

    }
    if(balindex<j)
    {
        quicksort(arr,balindex,j);
    }
    if(jobbindex>i)
    {
        quicksort(arr,i,jobbindex);
    }
}

int main()
{

    return 0;
}
