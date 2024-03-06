#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,6,4,5,9,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int prod = 1;
    for(int i=0;i<n;i++)
    {
        prod = prod*arr[i];
    }
    cout<<prod;
    return 0;
}