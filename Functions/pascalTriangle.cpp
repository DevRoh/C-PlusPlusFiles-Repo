#include<iostream>
using namespace std;
int factorial(int x)
{
    int prod = 1;
    for(int i=1;i<=x;i++)
    {
        prod*=i;
    }
    return prod;
}
int combination(int n, int r)
{
    return (factorial(n)/(factorial(r)*factorial(n-r))); 

}
int main()
{
    int n;
    cout<<"Enter number of Rows: ";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for(int k=0;k<=n-i;k++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}