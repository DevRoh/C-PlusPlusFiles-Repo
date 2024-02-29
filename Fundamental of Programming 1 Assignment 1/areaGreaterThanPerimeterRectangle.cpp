#include <iostream>
using namespace std;
int main()
{
    float length, breadth;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    float area = length * breadth;
    float perimeter = 2 * (length + breadth);

    if (area > perimeter)
    {
        cout << "The area of the rectangle is greater than its perimeter." << endl;
    }
    else
    {
        cout << "The perimeter of the rectangle is greater than or equal to its area." << endl;
    }
    return 0;
}