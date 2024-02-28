#include<iostream>
using namespace std;
int main()
{
    int arr[] = {12,35,15,74};
    int* ptr = arr;
    cout<<ptr<<endl; //Giving address
    cout<<ptr[0];
    return 0;
}