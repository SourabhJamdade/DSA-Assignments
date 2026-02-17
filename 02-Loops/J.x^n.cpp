#include <iostream>
using namespace std;

int main()
{
    long long x, y, z = 1;

    cin >> x >> y;

    for (long long i = 1; i <= y; i++)
        z *= x;
    cout << z << endl;
}