#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elements of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements for your array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        max = arr[i];
    }
    cout<<"The max element is: "<<max<<endl;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>smax && arr[i]!=max)
        {
            smax=arr[i];
        }
    }
    cout<<"The second largest element is: "<<smax;
    return 0;
}