#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cout<<"Enter size of your Array: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cout<<"Enter "<<i+1<<"th element: ";
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;
    cout<<"The original Array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }

    int count=0;
    int x;
    cout<<"Enter x: ";
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(v[i]>x)
        {
            count++;
        }
    }
    cout<<endl;
    cout<<count;
    return 0;
}