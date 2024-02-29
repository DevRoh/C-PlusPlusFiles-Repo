#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter radius of your circle: ";
    cin>>r;
    int area = 3.14*r*r;
    int circum = 2*3.14*r;
    if(area>circum)
    cout<<"Area is greater than circumference..";
    else
    cout<<"Area is not greater than circumference..";
    return 0;
}