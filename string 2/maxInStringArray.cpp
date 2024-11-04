#include<iostream>
#include<string>
using namespace std;
int main()
{
    string arr[] = {"0123","0023","456","00182","940","2901"};
    int max = (stoi)(arr[0]);
    string maxS;
    int idx;
    for(int i=1;i<6;i++)
    {
        int x = stoi(arr[i]);
        if(x>max)
        {
            max = x;
            idx = i;
            maxS = arr[i];
        }
    }
    cout<<"The max string is: "<<maxS<<" and it's index is: "<<idx;
    return 0;
}