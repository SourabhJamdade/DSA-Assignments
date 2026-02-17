#include <iostream>
using namespace std;

int main()
{
    int j;
    int p = 0;
    int n = 0;
    int e = 0;
    int o = 0;
    cin >> j;
    for (int i = 1; i <= j; i++)
    {
        int num;
        cin >> num;
        if (num > 0)
            p++;
        if (num < 0)
            n++;
        if (num % 2 == 0)
            e++;
        if (num % 2 != 0)
            o++;
    }
    cout << p << endl;
    cout << n << endl;
    cout << e << endl;
    cout << o << endl;
}