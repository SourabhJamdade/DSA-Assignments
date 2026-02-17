#include <iostream>
using namespace std;

int main()
{
    long long num, rev = 0;

    cin >> num;

    if (num == 0)
    {
        cout << 0;
        return 0;
    }

    while (num != 0)
    {
        rev = (num % 10) + (rev * 10);
        num = num / 10;
    }
    cout << rev << endl;
}