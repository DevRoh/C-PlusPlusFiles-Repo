#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of Rows: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a = 65;
        for(int j=1;j<=i;j++)
        {
            cout<<(char)a;
            a++;
        }
        cout<<endl;
    }
    return 0;
}