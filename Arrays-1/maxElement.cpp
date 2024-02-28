#include<iostream>
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
    int max = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        max = arr[i];
    }
    cout<<"The max element is: "<<max;
    return 0;
}