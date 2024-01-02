#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter your first number: ";
    cin>>a;
    int b;
    cout<<"Enter your second number: ";
    cin>>b;
    int c;
    cout<<"Enter your third number: ";
    cin>>c;
    int max;
    if(a>b && a>c)
    max = a;
    else if(b>a && b>c)
    max = b;
    else
    max = c;

    cout<<"Greatest of three number oyu entered is: "<<max;
    return 0;
}