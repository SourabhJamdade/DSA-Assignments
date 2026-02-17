#include <iostream>
using namespace std;

int main()
{
    long long num, rev = 0, x;

    cin >> num;
    x = num;

    while (num != 0)
    {
        rev = (num % 10) + (rev * 10);
        num = num / 10;
    }
    if (x == rev)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}