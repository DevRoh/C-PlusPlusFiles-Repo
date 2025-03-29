#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = 8;
    for(int i=0;i<n-1;i++)
    {
        bool flag = true;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]<arr[j+1])
            {
                flag = false;
                swap(arr[j],arr[j+1]);
            }
        }
        if(flag==true) break;

    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}