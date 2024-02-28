#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elements of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements for your array: ";
    int idx = -1;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the element you want to search: ";
    cin>>target;
    bool flag = false;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            flag = true;
            idx = i;
            break;
        }
    }
    if(flag == true)
    cout<<"Element is present at: "<<idx;
    else
    cout<<"Element is'nt present";
    return 0;
}