#include<iostream>
using namespace std;
int factorial(int x)
{
    int prod = 1;
    for(int i=1;i<=x;i++)
    {
        prod = prod*i;
    }
    return prod;
}
int main()
{
    int n;
    cout<<"Enter first n: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"1."<<" "<<factorial(i)<<endl;
    }
    
    return 0;
}