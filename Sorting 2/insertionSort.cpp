#include<iostream>
using namespace std;
int main()
{
    int arr[] = {5,3,1,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++)
    {
        int j = i;
        while(j>=1 && arr[j]<arr[j-1])
        {
         swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int ele : arr)
        cout<<ele<<" ";
    return 0;
}