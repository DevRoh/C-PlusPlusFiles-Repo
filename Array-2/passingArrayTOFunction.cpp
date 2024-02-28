#include<iostream>
using namespace std;
void display(int a[], int size)
{
    for(int i=0;i<size;i++)
    cout<<a[i]<<" ";
}
void change(int b[],int size)
{
    b[0] = 100;
}
int main()
{
    int arr[] = {1,2,3,4,52};
    int size = sizeof(arr)/sizeof(arr[0]);
    //Accessing the element of array in another function
    //updation, pass by value or reference
    display(arr,size);  // Calling
    cout<<endl;
    change(arr,size);
    display(arr,size);
    return 0;
}