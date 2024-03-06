#include<iostream>
using namespace std;
int main()
{
    int arr[] = {3,8,7,9,1,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = false;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                flag=true;
                break;
            }
        }
    }
    if(flag)
    {
        cout<<"Array contains duplicate elements..";
    }
    else
    {
        cout<<"Array doesnt contains Duplicate element.";
    }
    return 0;
}