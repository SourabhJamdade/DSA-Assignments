#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if (ch >= '0' && ch <= '9')
        cout << "Digit";
    else if (ch >= 'A' && ch <= 'Z')
        cout << "Uppercase";
    else if (ch >= 'a' && ch <= 'z')
        cout << "Lowercase";
    else if (ch >= 33 && ch <= 126)
        cout << "Special";
}