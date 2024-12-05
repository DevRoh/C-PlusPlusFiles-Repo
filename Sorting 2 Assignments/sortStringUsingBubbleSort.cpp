#include<iostream>
using namespace std;
int main()
{
    string arr[] = {"c","a","d","f","t"};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++)
    {
        bool flag = true;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag==true) break;
    }
    
    for(string ele : arr)
    {
        cout<<ele<<" ";
    }
    return 0;
}