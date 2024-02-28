#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elements: "<<endl;
    cin>>n;
    int sum = 0;
    int arr[n];
    cout<<"Enter elements of Array: "<<endl; 
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++)
    {
        sum = sum+arr[i];
    }
    cout<<sum;
    return 0;
}