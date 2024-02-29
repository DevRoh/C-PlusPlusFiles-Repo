#include<iostream>
using namespace std;
int main()
{
    float side1, side2, side3;

    cout << "Enter the length of side 1: ";
    cin >> side1;

    cout << "Enter the length of side 2: ";
    cin >> side2;

    cout << "Enter the length of side 3: ";
    cin >> side3;

    if (side1 == side2 && side2 == side3) {
        cout << "Equilateral triangle" << endl;
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        cout << "Isosceles triangle" << endl;
    } else {
        cout << "Scalene triangle" << endl;
    }
    return 0;
}