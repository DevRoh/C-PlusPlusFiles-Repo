#include<iostream>
using namespace std;
int upto3Stair(int n) {
    if(n==1) return 1;
    if (n==2) return 2;
    if (n==3) return 4;
    return upto3Stair(n-1) + upto3Stair(n-2) + upto3Stair(n-3);
}
int main()
{
    cout<<upto3Stair(10);
    return 0;
}