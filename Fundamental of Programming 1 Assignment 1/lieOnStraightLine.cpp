#include<iostream>
using namespace std;
int main()
{
    float x1, y1, x2, y2, x3, y3;

    cout << "Enter coordinates of Point 1 (x1, y1): ";
    cin >> x1 >> y1;

    cout << "Enter coordinates of Point 2 (x2, y2): ";
    cin >> x2 >> y2;

    cout << "Enter coordinates of Point 3 (x3, y3): ";
    cin >> x3 >> y3;

    float slope1 = (y2 - y1) / (x2 - x1);
    float slope2 = (y3 - y2) / (x3 - x2);

    if (slope1 == slope2) {
        cout << "The three points lie on the same straight line." << endl;
    } else {
        cout << "The three points do not lie on the same straight line." << endl;
    }
    return 0;
}