#include<iostream>
using namespace std;

bool isAlmostSorted(int arr[], int n) {
    int count = 0;

    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) 
            count++;
        if(count > 1) 
            return false; // More than one misplaced element
    }

    return true; // Only one or zero misplaced element
}

int main() {
    int arr[] = {1, 3, 2, 4, 5};  // Almost sorted
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << (isAlmostSorted(arr, n) ? "Yes" : "No");
    return 0;
}
