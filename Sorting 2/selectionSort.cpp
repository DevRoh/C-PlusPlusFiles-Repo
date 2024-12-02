#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[] = {5,3,1,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    //Normal printing
    for(int ele : arr)
    {
        cout<<ele<<" ";
    }
    for(int i=0;i<n-1;i++)
    {
        int min = INT_MAX;
        int minidx = -1;
        //minimum elementt calculattion for orange box
        for(int j=i;j<n;j++)
        {
            if(arr[j]<min)
            {
                min = arr[j];
                minidx = j;
            }
        }
        swap(arr[i],arr[minidx]);
    }
    cout<<endl;
    //Sorted printing
    for(int ele:arr)
    {
        cout<<ele<<" ";
    }
    return 0;
}