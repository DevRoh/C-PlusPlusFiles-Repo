#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    int hcf = 1;
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    return hcf;
}
int main()
{
    int a;
    cout << "Enter first number : ";
    cin >> a;
    int b;
    cout << "Enter second Number: ";
    cin >> b;
    int res = gcd(a, b);
    cout<<res;
    return 0;
}