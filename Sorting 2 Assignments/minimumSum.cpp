#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 1, 5, 5, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Insertion sort
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j >= 1 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }

    // cout<<"Sorted Array: "<<endl;
    // for(int ele : arr)
    // {
    //     cout<<ele<<" ";
    // }

    //Storing the sorted array into an integer
    int x = 0;
    for(int i=0;i<n;i++)
    {
        x*=10;
        x+=arr[i];
    }
    // cout<<endl;
    // cout<<x;

    //for seecond mimimum we need to change the sorteed array

    for(int i=n-1;i>=1;i--)
    {
        if(arr[i]!=arr[i-1])
        {
            swap(arr[i],arr[i-1]);
            break;
        }
    }

    // making this array into inteeger
    int y = 0;
    for(int i=0;i<n;i++)
    {
        y*=10;
        y+=arr[i];
    }

    cout<<"minimum sum: "<<x+y;
    return 0;
}