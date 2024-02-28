#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void revPart(int i,int j,vector<int>&v)
{
    while(i<=j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    vector<int>v;
    v.push_back(0);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);
    v.push_back(8);

    display(v);

    int k;
    cout<<"Enter how many times you are going to rotate: ";
    cin>>k;
    
    int n;
    n = v.size();
    if(k>n)
    k = k%n;
    revPart(0,n-k-1,v);
    revPart(n-k,n-1,v);
    revPart(0,n-1,v);

    display(v);
    return 0;
}