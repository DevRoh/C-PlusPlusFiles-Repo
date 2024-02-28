#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cout<<"Enter "<<i+1<<"th element: ";
        cin>>x;
        v.push_back(x);
    }

    // Printing the array

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl;


    int target;
    cout<<"Enter target: ";
    cin>>target;

    for(int i=0;i<v.size()-1;i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]+v[j]==target)
            {
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
    return 0;
}