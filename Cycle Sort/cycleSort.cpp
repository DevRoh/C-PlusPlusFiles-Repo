#include<iostream>
using namespace std;

void cycleSort(int arr[],int n) {
    int i=0;
    while(i<n) {
        int correctIdx = arr[i]-1;
        if(i==correctIdx) i++;
        else swap(arr[correctIdx],arr[i]);
    }
}

int main()
{
    int arr[] = {4,1,6,2,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    cycleSort(arr,n);

    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}