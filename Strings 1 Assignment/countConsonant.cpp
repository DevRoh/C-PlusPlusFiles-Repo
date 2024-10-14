#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    char str[n + 1];
    cout << "Enter the characters: ";
    for(int i = 0; i < n; i++) {
        cin >> str[i];
    }
    str[n] = '\0';

    int i = 0;
    int count = 0;

    while(str[i] != '\0') {
        if(!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')) {
            count++;
        }
        i++;
    }

    cout << "The number of consonants are: " << count;
    return 0;
}
