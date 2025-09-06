#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,1,12,13};
    int n = sizeof(arr)/sizeof(arr[0]);

    //Formation of prefix sum

    for(int i=1;i<n;i++) {
        arr[i] = arr[i-1]+arr[i];
    }
 
   int idx = -1;
    for(int i=0;i<n;i++) {
        if(2*arr[i]==arr[n-1]){
            idx = i;
            break;
        }
    }

    if(idx!=-1) cout<<"It can be partitioned at: "<<idx;
    else cout<<"Cant be partitioned";
    return 0;
}