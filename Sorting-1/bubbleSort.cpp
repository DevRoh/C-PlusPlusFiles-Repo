#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=0;j<n-1-i;j++)
    //     {
    //         if(arr[j]>arr[j+1])
    //             swap(arr[j],arr[j+1]);
    //     }
    // }

    //Bubble sort Optimized

    for(int i=0;i<n-1;i++)
    {
        bool flag = true;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                flag = false;
                swap(arr[j],arr[j+1]);

            }
        }
        if(flag==true) //Swap didn't happened
            break;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}