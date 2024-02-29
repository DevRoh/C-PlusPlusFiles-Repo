#include <iostream>
using namespace std;
int main()
{
    int marksA, marksB, marksC;

    cout << "Enter the marks of student A: ";
    cin >> marksA;

    cout << "Enter the marks of student B: ";
    cin >> marksB;

    cout << "Enter the marks of student C: ";
    cin >> marksC;

    if (marksA < marksB && marksA < marksC)
    {
        cout << "Student A scored the least marks." << endl;
    }
    else if (marksB < marksA && marksB < marksC)
    {
        cout << "Student B scored the least marks." << endl;
    }
    else
    {
        cout << "Student C scored the least marks." << endl;
    }
    return 0;
}