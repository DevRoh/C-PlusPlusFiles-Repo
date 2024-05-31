#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&v,int n)
{
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        if(v[i]<0) i++;
        else if(v[j]>0) j--;
        else if(v[i]>0 && v[j]<0){
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
    vector<int>v;
    v.push_back(-3);
    v.push_back(23);
    v.push_back(-33);
    v.push_back(-3);
    v.push_back(23);
    v.push_back(-33);
    v.push_back(-3);
    v.push_back(23);
    v.push_back(-33);

    int n = v.size();
    cout<<"Original array: ";
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v,n);
    cout<<"After sorting: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}