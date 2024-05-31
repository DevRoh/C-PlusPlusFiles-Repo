#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&v)
{
    int n = v.size();
    int i=0;
    int j = n-1;
    while(i<=j)
    {
        if(v[i]==0)
        i++;
        else if(v[j]==1)
        j--;
        else if(v[i]==1 && v[j]==0)
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
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