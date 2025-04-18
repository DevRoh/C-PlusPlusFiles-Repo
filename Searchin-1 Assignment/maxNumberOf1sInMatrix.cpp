#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[4][4] = {
        0, 1, 1, 1,
        0, 0, 1, 1,
        1, 1, 1, 1,
        0, 0, 0, 0};
    vector<int> res;
    int n = 4;
    int m = 4;
    for (int i = 0; i < n; i++)
    {
        int high = m - 1;
        int low = 0;
        int mid;
        int firstOcc = -1;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            if (arr[i][mid] == 1)
            {
                if (arr[i][mid - 1] == 1)
                {
                    high = mid - 1;
                }
                else
                    firstOcc = mid;
                break;
            }
            else
                low = mid + 1;
        }
        int count = m - firstOcc;
        res.push_back(count);
    }

    int max = res[0];
    int maxIdx = -1;
    for (int i = 0; i < res.size(); i++)
    {
        if (res[i] > max)
        {
            max = res[i];
            maxIdx = i;
        }
    }
    cout<<maxIdx;

    return 0;
}