#include <iostream>
using namespace std;

int main()
{
    long long num, sum = 0;

    cin >> num;

    while (num != 0)
    {
        sum += (num % 10);
        num = num / 10;
    }
    cout << sum << endl;
}