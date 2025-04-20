#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==1 || n==0) return 1; //base case
    int ans = n*fact(n-1);
    return ans;
}
int main()
{
    cout<<fact(1);
    return 0;
}