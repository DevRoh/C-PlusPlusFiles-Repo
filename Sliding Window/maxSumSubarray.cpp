#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    int maxSum = INT_MIN;
    int maxIdx = -1;
    int prevSum=0;
    for(int i=0;i<k;i++) {
        prevSum+=arr[i];
    }
    maxSum = prevSum;
    int i=1;
    int j = k;
    int currSum = 0;
    while(j<n) {
        currSum =prevSum+arr[j]-arr[i-1];
        if(currSum>maxSum) {
            maxSum = currSum;
            maxIdx = i;
        }   
        prevSum = currSum;
        i++;
        j++;
        
    }

    cout<<maxSum<<endl;
    cout<<maxIdx;
    return 0;
}