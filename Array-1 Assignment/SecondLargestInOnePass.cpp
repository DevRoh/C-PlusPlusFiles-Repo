#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,5,48,9,41};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    int smax = arr[0];

    for(int i=0; i<n; i++)
    {
        if(arr[i] > max)
        {
            smax = max;
            max = arr[i];
        }
        else if(arr[i] > smax)
        {
            smax = arr[i];
        }
    }

    cout << "The second largest element is: " << smax;

    return 0;
}
