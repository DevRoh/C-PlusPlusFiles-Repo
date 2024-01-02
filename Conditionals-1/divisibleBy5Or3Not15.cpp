#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any Number: ";
    cin>>n;
    if(n%5==0 || n%3==0)
    {
        if(n%15!=0)
        {
            cout<<"True";
        }
        else
        cout<<"False";
    }
    
    return 0;
}