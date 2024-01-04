#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Entere number of Rows: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a = 1;
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<a;
            a++;
        }
        cout<<endl;
    }
    return 0;
}