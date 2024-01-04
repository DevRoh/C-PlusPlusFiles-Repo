#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of Rows: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a=65;
        for(int j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                cout<<(char)a;
                a++;
            }
            else
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}