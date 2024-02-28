#include<vector>
#include<iostream>
using namespace std;

void change(vector<int>&a)
{
    a[2] = 110;
}
int main()
{
    vector<int>v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(7);
    v.push_back(11);

    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    change(v);

    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
    return 0;
}