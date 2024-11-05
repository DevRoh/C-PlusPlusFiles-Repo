#include<iostream>
using namespace std;
int main()
{
    int arr[] = {5,4,3,2,6,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    //Bubble Sort
    // for(int i=0;i<n-1;i++) //n-1 passes
    // {
    //     for(int j=0;j<n-1-i;j++)
    //     {
    //         if(arr[j]>arr[j+1])
    //         {
    //             // int temp = arr[j];
    //             // arr[j] = arr[j+1];
    //             // arr[j+1] = temp;
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    // }
    
    //BubbleSort Optimised
    for(int i=0;i<n-1;i++) //n-1 passes
    {
        bool flag = true;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag == true) break;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}