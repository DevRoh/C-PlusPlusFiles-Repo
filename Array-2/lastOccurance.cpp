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
    int idx = -1;
    int target;
    cout<<"Enter the element you want to check: ";
    cin>>target;
    for(int i=0;i<v.size();i++)
    {
        if(v.at(i)==target)
        idx=i;
    }

    cout<<"the last occurance of "<<target<<" is "<<idx<<"th";
    return 0;
}