#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,4,5,9,15,18,21,24};
    int x = 20;
    int n=9;
    int low = 0;
    int high = n-1;
    bool flag = false;
    while(low<high)
    {
        int mid = low+(high-low)/2;
        if(x==arr[mid])
        {
            cout<<arr[mid-1];
            flag = true;
            break;

        }
        else if(arr[mid]<x) low = mid+1;
        else high = mid-1;
    }
    if(flag==false)
    {
        cout<<arr[high];
    }
    return 0;
}