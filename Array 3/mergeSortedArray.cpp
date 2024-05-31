#include<iostream>
#include<vector>
using namespace std;

vector<int>merge(vector<int>&v1,vector<int>&v2)
{
    int i=0;
    int j=0;
    int k=0;
    int n = v1.size();
    int m=v2.size();
    vector<int>res(m+n);
    while(i<n && j<m)
    {
        if(v1[i]<v2[j])
        {
            res[k]=v1[i];
            i++;
            k++;
        }
        else{
            res[k] = v2[j];
            j++;
            k++;
    }
         } // for remaining elements

        if(i==n)
        {
            while(j<m)
            {
                res[k]=v2[j];
                j++;
                k++;
            }
        }
            else if(j==m)
            {
                while(i<n)
                {
                    res[k]=v1[i];
                    i++;
                    k++;
                }

            }
        
        return res;

    }


int main()
{
    vector<int>arr1;
    arr1.push_back(1);
    arr1.push_back(3);
    arr1.push_back(5);
    arr1.push_back(8);

    vector<int>arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(8);
    arr2.push_back(10);

    vector<int>res = merge(arr1,arr2);

    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}