#include<iostream>
using namespace std;
int main()
{
    int arr[] = {3,8,1,6,7,6,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int min = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    cout<<"minimum element is : "<<min;
    return 0;
}