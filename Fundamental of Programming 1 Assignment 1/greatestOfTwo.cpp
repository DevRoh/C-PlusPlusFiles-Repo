#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter 1st number: ";
    cin>>a;
    int b;
    cout<<"Enter 2nd number: ";
    cin>>b;
    int max = 0;
    if(a>b)
    max = a;
    else
    max = b;
    cout<<"The max element is: "<<max;
    return 0;
}