#include<iostream>
using namespace std;
int main()
{
    int arr[] = {0,1,2,3,4,8,9,10};
    int low = 0;
    int high = (sizeof(arr)/sizeof(arr[0])-1);
    int mid;
    int ans = -1;
    while(low<=high)
    {
        mid = low+(high-low)/2;
        if(arr[mid]==mid)
            low = mid+1;
        else {
            ans =mid;
            high = mid-1;
        }
    }
    cout<<ans;
    return 0;
}