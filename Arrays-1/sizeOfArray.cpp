#include<iostream>
using namespace std;
int main()
{
    int arr[] = {4,32,85,6,7};
    int size;
    size = sizeof(arr)/sizeof(arr[0]);
    cout<<size;
    return 0;
}