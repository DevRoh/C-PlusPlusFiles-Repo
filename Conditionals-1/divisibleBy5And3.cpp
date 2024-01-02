#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    if(n%5==0 && n%3==0)
    {
        cout<<n<<" is divisible by 5 & 3";
    }
    else
    cout<<"Error";
    return 0;
}