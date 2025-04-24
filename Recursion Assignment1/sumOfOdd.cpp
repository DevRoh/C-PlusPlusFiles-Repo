#include<iostream>
using namespace std;

int sum(int a,int b)
{
    if(a>b) return 0;
    if(a%b!=0)
        return a+sum(a+1,b);
    else
       return sum(a+1,b);
}

int main()
{
    int a;
    cout<<"Enter a: ";
    cin>>a;
    int b;
    cout<<"Enter b: ";
    cin>>b;
    int res = sum(a,b);
    cout<<res;
    return 0;
}