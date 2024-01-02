#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    while(n!=0)
    {
        int ld = n%10;
        cout<<ld;
        n/=10;
    }
    return 0;
}


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    int ld = 0;
    int r = 0;
    while(n!=0)
    {
        r = r*10;
        ld = n%10;
        r+=ld;
        n/=10;
    }

    cout<<r;
    return 0;
}