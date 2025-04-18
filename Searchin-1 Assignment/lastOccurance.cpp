#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,3,4,4,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 9;
    int high = n-1;
    int low = 0;
    int mid;
    bool flag = false;

    while(low<=high)
    {
        mid = low+(high-low)/2;
        if(arr[mid]==x)
        {
            if(arr[mid+1]==x)
            low = mid+1;
            else
            {
                cout<<"The last occurance of "<<x<<" is at index: "<<mid;
                flag = true;
                break;
            }
        }
        else if(arr[mid]<x)
        {
            low=mid+1;
        }
        else
            high = mid-1;
        
    }

    if(flag==false) cout<<-1;
    return 0;
}