#include <iostream>

using namespace std;

int main() {
    const double PI = 3.14;
    double radius, height;

    cout << "Enter the radius of the cylinder: ";
    cin >> radius;

    cout << "Enter the height of the cylinder: ";
    cin >> height;

    double volume = PI * radius * radius * height;

    cout << "The volume of the cylinder is: " << volume << endl;

    return 0;
}