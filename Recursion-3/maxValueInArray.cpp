#include <iostream>
using namespace std;
int findMax(int arr[], int n, int idx)
{
    if(idx>=n) return 0;
    return max(arr[idx],findMax(arr,n,idx+1));
}
int main()
{
    int arr[] = {1, 23, 23, 654, 54, 564, 54, 32};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = findMax(arr, n, 0);
    cout<<max;
    return 0;
}