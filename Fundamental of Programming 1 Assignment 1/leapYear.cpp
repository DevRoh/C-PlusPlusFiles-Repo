#include<iostream>
using namespace std;
int main()
{
    int y;
    cout<<"Enter year: ";
    cin>>y;
    if(y%4==0)
    cout<<y<<" is leap year";
    else
    cout<<y<<" is not a leap year";
    return 0;
}