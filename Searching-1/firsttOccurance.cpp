#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,2,3,3,3,3,3,4,4,5,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 3;
    int high = n-1;
    int low = 0;
    int mid;
    while(low<=high)
    {
        mid = low+(high-low)/2;
        if(x==arr[mid])
        {
            if(arr[mid-1]==x)
            {
                high = mid-1;
            }
            else{
                cout<<"the index is: "<<mid;
                break;
            }
        }
        else if(x>arr[mid])
        {
            low = mid+1;
        }
        else
            high = mid-1;
    }
    return 0;
}