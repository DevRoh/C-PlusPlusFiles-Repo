#include<iostream>
using namespace std;
int main()
{
    int arr[] = {0,0,0,0,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int low = 0;
    int high = n-1;
    int mid;
    int fidx = -1;
    while(low<=high)
    {
        mid = low+(high-low)/2;
        if(arr[mid]==1)
        {
            if(arr[mid-1]==1)
            {
                high=mid-1;
            }
            else
            {
                fidx = mid;
                break;
            }

        }
        else
            low = mid+1;
        
    }

    int res = n-fidx;
    cout<<res;
    return 0;
}