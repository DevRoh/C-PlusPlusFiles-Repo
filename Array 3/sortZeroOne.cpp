#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int>&v)
{
    int n = v.size();
    int noz=0;
    int noO=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==0) noz++;
        else noO++;
    }
    for(int i=0;i<n;i++)
    {
        if(i<noz)
        v[i] = 0;
        else
        v[i] = 1;
    }
}

int main()
{
    int n;
    cout<<"Enter number of element: ";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cout<<"Enter element(0s and 1s): ";
        cin>>x;
        v.push_back(x);
    }

    cout<<"Original array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    sort(v);
    cout<<"Sorted array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}